class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> newQ;
        int lastElement;
        while (!q.empty())
        {
            int value = q.front();
            q.pop();
            if (q.empty())
            {
                lastElement = value;
                break;
            }
            newQ.push(value);
        }
        q = newQ;
        return lastElement;
    }

    int top()
    {
        queue<int> newQ;
        int topElement;
        while (!q.empty())
        {
            int value = q.front();
            q.pop();
            if (q.empty())
            {
                topElement = value;
            }
            newQ.push(value);
        }
        q = newQ;
        return topElement;
    }

    bool empty()
    {
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