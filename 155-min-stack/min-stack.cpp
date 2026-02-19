class MinStack {
    //   define the data members
    stack<long long> s;
    long long mini;

public:
    MinStack() {}

    void push(long long  val) {
       
        if (s.empty()) 
        {
        
            s.push(val);
            mini = val;
        } else {
            if (val < mini) {
                s.push(2ll*val - mini);
                mini = val;
            } else {
                s.push(val);
            }
        }
    }

    void pop() {
        //  if stack is empty 
        if(s.empty())
        {
            return;
        }
         
         long long  curr=s.top();
         s.pop();
         if(curr < mini)
         {
           mini=2ll*mini-curr;
         }

    }

    int top() {
    //    check whether the stack is empty or not 
        if(s.empty())
        {
            return -1;
        }
        long long  curr=s.top();
        if( curr < mini)
        {
            return mini;
        }
        else{
            return curr;
        }


    }

    int getMin() {
        // if stack is empty
        if(s.empty()){
            return -1;
        }
        else{
            return  (int)mini;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */