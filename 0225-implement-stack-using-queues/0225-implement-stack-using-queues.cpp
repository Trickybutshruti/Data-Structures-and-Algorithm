class MyStack {
private:
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.empty()) return -1;
        int n=q.size();
        for(int i=0;i<n-1;i++){
            q.push(q.front());
            q.pop();
        }
        int res=q.front();
        q.pop();
        return res;
    }
    
    int top() {
        if(q.empty()) return -1;
        int n=q.size();
        int res=-1;
        for(int i=0;i<n;i++){
            res=q.front();
            q.push(q.front());
            q.pop();
        }
        return res;
    }
    
    bool empty() {
        return q.empty();
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