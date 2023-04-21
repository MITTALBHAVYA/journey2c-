#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        cout << "ENTER DATA TO BE INSERTED IN LEFT of " << data << endl;
        root->left = buildTree(root->left);
        cout << "ENTER DATA TO BE INSERTED IN RIGHT OF " << data << endl;
        root->right = buildTree(root->right);
        return root;
    }
}
void preorderTraversal(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
    else
    {
        return;
    }
}
void postorderTraversal(node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
    else
    {
        return;
    }
}
void inorderTraversal(node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
    else
    {
        return;
    }
}
void levelorderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


node *buildlevelordertracersal(node *root)
{
    queue<node *> q;
    cout << "ENTER DATA FOR ROOT ELEMENT" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "ENTER LEFT NODE for :: " << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout << "ENTER RIGHT NODE FOR :: " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
    return root;
}
/*
int heightoftree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int left = heightoftree(root->left);
        int right = heightoftree(root->right);

        int ans = max(left, right) + 1;
        return ans;
    }
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int h1 = diameter(root->left);
        int h2 = diameter(root->right);
        int h3 = heightoftree(root->left) + heightoftree(root->right) + 1;
        int dia = max(h1, max(h2, h3));
        return dia;
    }
}
void printlevel(node *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    else if (level == 1)
    {
        cout << root->data << " ";
    }
    else
    {
        printlevel(root->left, level - 1);
        printlevel(root->right, level - 1);
    }
}
void reverselevelorder(node *root)
{
    int h = heightoftree(root);
    for (int i = h; i > 0; i--)
    {
        printlevel(root, i);
        cout << endl;
    }
}
void zigzagtraversal(node *root)
{
    queue<node *> q;
    // vector<int> ans;
    q.push(root);
    // q.push(NULL);
    bool left_to_right = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            node *frontnode = q.front();
            q.pop();
            int index = left_to_right ? i : size - 1 - i;
            ans[index] = frontnode->data;
            if (frontnode->left)
            {
                q.push(frontnode->left);
            }
            if (frontnode->right)
            {
                q.push(frontnode->right);
            }
        }
        // q.push(NULL);
        left_to_right = !left_to_right;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void leftTraversal(node *root)
{
    // aa shit here we go again ...
    // lets scroll all left possible
    node *temp = root;
    if ((temp == NULL) || (temp->left == NULL && temp->right == NULL))
    {
        return;
    }
    cout << temp->data << " ";
    if (root->left)
    {
        leftTraversal(root->left);
    }
    else
    {
        leftTraversal(root->right);
    }
}
void rightTraversal(node *temp)
{
    stack<node*>s;
   static node *root = temp;
    if ((temp == NULL) || (temp->left == NULL && temp->right == NULL))
    {
        return;
    }
    s.push(temp);
    if (temp->right)
    {
        rightTraversal(temp->right);
    }
    else
    {
        rightTraversal(temp->left);
    }
    while(!s.empty())
    {
        node *t=s.top();
        if(t==root)
        {
            break;
        }
        s.pop();
        cout<<t->data<<" ";
    }
}
void boundaryTraversal(node *root)
{
    node *temp = root;
    if(temp==NULL)
    {
        return;
    }
    leftTraversal(temp);
    printleaves(temp);
    rightTraversal(temp);
}*/
int main()
{
    node *root = NULL;
    cout << "ENTER THE ROOT DATA TO CONTINUE THE IMPLEMENTATION OF TREE" << endl;
    //root = buildTree(root);
    root = buildlevelordertracersal(root);
     preorderTraversal(root);
    cout << endl;
    inorderTraversal(root);
     cout << endl;
     postorderTraversal(root);
    //  cout << endl;
    //  root = buildlevelordertracersal(root);
    // levelorderTraversal(root);
    // cout<<"height of tree "<<heightoftree(root)<<endl;
    // cout<<endl;
//  reverselevelordertraversal(root);
    // printlevel(root,3);
    // reverselevelorder(root);
    // cout<<heightoftree(root)<<endl;
    // cout<<"DIAMETER OF GIVEN TREE "<<diameter(root)<<endl;
    // cout<<"HERE left but leaf PRINTOUT"<<endl;
//  zigzagtraversal(root);
    // boundaryTraversal(root);
    //  boundaryTraversal(root);
    // printleaves(root);
    return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
//1 2 3 -1 5 4 -1 6 8 11 -1 -1 -1 -1 -1 -1 -1 