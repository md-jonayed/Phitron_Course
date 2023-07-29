#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    string value;
    Node *next;
    Node(string value)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert(Node *&head, Node *&tail, string value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string value;
        cin >> value;
        if (value == "end")
        {
            break;
        }
        else
        {
            insert(head, tail, value);
        }
    }

    int query;
    cin >> query;

    Node *currentNode = head;

    for (int i = 1; i <= query; i++)
    {
        string operation;
        cin >> operation;

        if (operation == "visit")
        {
            string url;
            cin >> url;
            Node *temp = head;
            bool found = false;

            while (temp != NULL)
            {
                if (url == temp->value)
                {
                    currentNode = temp;
                    cout << temp->value << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }

            if (found == false)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (operation == "next")
        {
            if (currentNode != NULL && currentNode->next != NULL)
            {
                currentNode = currentNode->next;
                cout << currentNode->value << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (operation == "prev")
        {
            if (currentNode != NULL && currentNode->prev != NULL)
            {
                currentNode = currentNode->prev;
                cout << currentNode->value << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
