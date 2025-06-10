class MyStack {
public:
    MyStack() {
        
    }
    
    queue<int> k;
    void push(int x) {
        k.push(x);
        for(int i=0; i<k.size()-1; i++){
            k.push(k.front());
            k.pop();
        }
    }
    
    int pop() {
        int tmp = k.front();
        k.pop();
        return tmp;
    }
    
    int top() {
        return k.front();
    }
    
    bool empty() {
      return k.empty();  
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
