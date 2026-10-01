class LFUCache {
    struct Node {
        int key, value, freq;
        Node* prev;
        Node* next;

        Node(int k, int v) : key(k), value(v), freq(1),
                             prev(nullptr), next(nullptr) {}
    };

    struct List {
        Node* head;
        Node* tail;
        int size;

        List() {
            head = new Node(0, 0);
            tail = new Node(0, 0);

            head->next = tail;
            tail->prev = head;
            size = 0;
        }

        void addFront(Node* node) {
            node->next = head->next;
            node->prev = head;

            head->next->prev = node;
            head->next = node;

            size++;
        }

        void remove(Node* node) {
            node->prev->next = node->next;
            node->next->prev = node->prev;

            size--;
        }

        Node* removeLast() {
            if (size == 0)
                return nullptr;

            Node* node = tail->prev;
            remove(node);
            return node;
        }
    };

    int capacity;
    int size;
    int minFreq;

    unordered_map<int, Node*> keyMap;
    unordered_map<int, List*> freqMap;

    void updateFreq(Node* node) {
        int oldFreq = node->freq;

        freqMap[oldFreq]->remove(node);
        if (oldFreq == minFreq && freqMap[oldFreq]->size == 0) {
            minFreq++;
        }
        node->freq++;
        if (!freqMap.count(node->freq)) {
            freqMap[node->freq] = new List();
        }

        freqMap[node->freq]->addFront(node);
    }

public:
    LFUCache(int capacity) {
        this->capacity = capacity;
        size = 0;
        minFreq = 0;
    }

    int get(int key) {
        if (!keyMap.count(key))
            return -1;

        Node* node = keyMap[key];

        updateFreq(node);

        return node->value;
    }

    void put(int key, int value) {
        if (capacity == 0)
            return;
        if (keyMap.count(key)) {
            Node* node = keyMap[key];

            node->value = value;
            updateFreq(node);

            return;
        }
        if (size == capacity) {
            List* list = freqMap[minFreq];
            Node* victim = list->removeLast();

            keyMap.erase(victim->key);

            delete victim;

            size--;
        }

        Node* node = new Node(key, value);

        keyMap[key] = node;

        if (!freqMap.count(1)) {
            freqMap[1] = new List();
        }
        freqMap[1]->addFront(node);
        minFreq = 1;
        size++;
    }
};
