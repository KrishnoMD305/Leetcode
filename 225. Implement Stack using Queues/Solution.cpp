class MyStack {
public:
    MyStack() {
        
    }
    queue<int> m1,m2;
    void push(int x) {
        m2.push(x);
        while(!m1.empty()){
            m2.push(m1.front());
            m1.pop();
        }
        swap(m1,m2);
    }
    
    int pop() {
        int tmp = m1.front();
        m1.pop();
        return tmp;
    }
    
    int top() {
        return m1.front();
    }
    
    bool empty() {
        return m1.empty();
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
