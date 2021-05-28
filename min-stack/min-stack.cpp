#include <utility>
class MinStack {
public:
    /** initialize your data structure here. */
    int top1;
    int min1;
    int n=10;
    vector<pair<int,int>>arr;
    MinStack() {
        top1=-1;
        min1=INT_MAX;
        //for(int i=0;i<10;i++)arr.push_back(make_pair(0,0));
        arr.resize(10e5);
    }
    
    void push(int val) {
        if(top1==-1){
            top1++;
            min1=INT_MAX;
            arr[top1].first=arr[top1].second=val;
        }
        else{
        arr[++top1].first=val;
        min1=min(arr[top1-1].second,arr[top1].first);
        arr[top1].second = min1;
        }
    }
    
    void pop() {
        top1--;
    }
    
    int top() {
        return arr[top1].first;
    }
    
    int getMin() {
        return arr[top1].second;
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