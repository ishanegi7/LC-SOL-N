class MyQueue {
    stack<int> input,output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
        
    }
    
    int pop() {
        shift();
        int x= output.top();
        output.pop();
        return x;
        
    }
    
    int peek() {
        shift();
        return output.top();
    }
    
    bool empty() {
        return input.empty()&& output.empty();
    }
private:
    void shift(){
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
    }    
};
