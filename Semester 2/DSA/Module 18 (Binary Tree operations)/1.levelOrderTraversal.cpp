#include <bits/stdc++.h>
using namespace std;
class BinaryTree
{
public:
    int value;
    BinaryTree *left;
    BinaryTree *right;
    BinaryTree(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelorder(BinaryTree *root)
{
    if (root == NULL)
    {
        cout << "Tree Empty" << endl;
        return;
    }
    queue<BinaryTree *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTree *f = q.front();
        q.pop();
        cout << f->value << " ";
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}
int main()
{

    BinaryTree *root = new BinaryTree(10);
    BinaryTree *a = new BinaryTree(20);
    BinaryTree *b = new BinaryTree(30);
    BinaryTree *c = new BinaryTree(40);
    BinaryTree *d = new BinaryTree(50);
    BinaryTree *e = new BinaryTree(60);
    BinaryTree *f = new BinaryTree(70);
    BinaryTree *g = new BinaryTree(80);
    BinaryTree *h = new BinaryTree(90);
    BinaryTree *i = new BinaryTree(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    c->left = g;
    c->right = h;
    d->left = i;

    levelorder(root);
    return 0;
}