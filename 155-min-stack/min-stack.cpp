class MinStack {
public:
    stack<pair<int,int>> s;

    void push(int val) {
        if(s.empty()) {
            s.push({val, val});
        } else {
            int currMin = min(val, s.top().second);
            s.push({val, currMin});
        }
    }

    void pop() {
        if(!s.empty()) {
            s.pop();
        }
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};