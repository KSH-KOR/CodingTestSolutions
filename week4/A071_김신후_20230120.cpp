#include <stack>
using namespace std;

class MyQueue {
    std::stack<int> my_stack;
    std::stack<int> stack_que;
    bool dirty;
    void mv(stack<int>& from, stack<int>& to) {
        while (!from.empty()) {
            to.push(from.top());
            from.pop();
        }
    }
public:
    MyQueue() {
        dirty = false;
    }

    void push(int x) {
        if (dirty) {
            mv(stack_que, my_stack);
        }
        my_stack.push(x);
        dirty = false;
    }

    int pop() {
        if (!dirty) {
            mv(my_stack, stack_que);
            dirty = true;
        }
        int f = stack_que.top();
        stack_que.pop();
        return f;
    }

    int peek() {
        if (!dirty) {
            mv(my_stack, stack_que);
            dirty = true;
        }
        return stack_que.top();
    }

    bool empty() {
        return dirty ? stack_que.empty() : my_stack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */