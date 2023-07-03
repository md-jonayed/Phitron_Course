class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> newStack;
        int first;
        while (!st.empty())
        {
            int value = st.top();
            st.pop();
            if (st.empty())
            {
                first = value;
                break;
            }
            newStack.push(value);
        }
        while (!newStack.empty())
        {
            st.push(newStack.top());
            newStack.pop();
        }
        return first;
    }

    int peek()
    {

        stack<int> newStack;
        int first;
        while (!st.empty())
        {
            int value = st.top();
            st.pop();
            if (st.empty())
            {
                first = value;
            }
            newStack.push(value);
        }
        while (!newStack.empty())
        {
            st.push(newStack.top());
            newStack.pop();
        }
        return first;
    }

    bool empty()
    {
        return st.empty();
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