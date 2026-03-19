class MinStack {
public:
    stack<int> s;       // main stack
    stack<int> minS;    // min stack

    void push(int val) {
        s.push(val);

        if(minS.empty()) {
            minS.push(val);
        } else {
            minS.push(min(val, minS.top()));
        }
    }

    void pop() {
        if(s.empty()) return;
        s.pop();
        minS.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minS.top();
    }
};
