class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        Node* curr = head;
        while (curr) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }
        curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* dummyHead = new Node(0);
        Node* copyTail = dummyHead;

        while (curr) {
            copyTail->next = curr->next;
            copyTail = copyTail->next;            
            curr->next = curr->next->next;
            curr = curr->next;
        }

        return dummyHead->next;
    }
};
