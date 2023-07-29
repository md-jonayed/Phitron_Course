class MyLinkedList
{
public:
    class Node
    {
    public:
        int val;
        Node *next;

        Node(int val) : val(val), next(NULL) {}
    };

    MyLinkedList()
    {
        head = NULL;
    }

    int get(int index)
    {
        if (index < 0 || index >= size())
        {
            return -1;
        }
        Node *temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void addAtIndex(int index, int val)
    {
        if (index <= 0)
        {
            addAtHead(val);
            return;
        }
        int len = size();
        if (index > len)
        {
            return; // Invalid index, do nothing
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size())
        {
            return; // Invalid index, do nothing
        }
        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        Node *deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;
    }

private:
    Node *head;

    int size()
    {
        int count = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */