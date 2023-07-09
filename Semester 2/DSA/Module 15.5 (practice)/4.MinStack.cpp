#include <bits/stdc++.h>

class minStack
{
    stack<int> s;   // main stack to store elements
    stack<int> min; // stack to keep track of minimum elements

public:
    // Constructor
    minStack() {}

    // Function to add another element equal to num at the top of stack.
    void push(int num)
    {
        if (min.empty())
        {
            min.push(num);
        }
        else if (num <= min.top())
        {
            min.push(num);
            // if num is smaller or equal to the current minimum, push it to the min stack
        }
        s.push(num); // push the element to the main stack
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        if (s.empty())
        {
            return -1; // stack is empty, return -1
        }
        int popped = s.top(); // store the top element to be popped
        s.pop();              // remove the top element from the main stack
        if (popped == min.top())
        {
            min.pop(); // if the popped element is the current minimum, remove it from the min stack
        }
        return popped; // return the popped element
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top()
    {
        if (s.empty())
        {
            return -1; // stack is empty, return -1
        }
        return s.top(); // return the top element of the main stack
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin()
    {
        if (min.empty())
        {
            return -1; // stack is empty, return -1
        }
        return min.top(); // return the current minimum element from the min stack
    }
};
