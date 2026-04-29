class MinStack {
public:
    list <int> stuck;
    MinStack() {
        
    }
    
    void push(int val) {
        stuck.push_back(val);
    }
    
    void pop() {
        stuck.pop_back();
    }
    
    int top() {
        return stuck.back();
    }
    
    int getMin() {
        int temp = stuck.front();
        for(auto iter : stuck){
            if(iter < temp){
                temp = iter;
            }
        }
        return temp;
    }
};
