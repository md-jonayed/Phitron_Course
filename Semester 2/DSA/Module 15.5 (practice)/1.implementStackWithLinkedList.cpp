/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

class Stack
{
public:
    Node *head;
    // Node* tail;
    int sz;

public:
    Stack()
    {
        head = NULL;
        // tail = NULL;
        sz = 0;
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }

    void push(int data)
    {
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int getTop()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }
};