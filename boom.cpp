  pair<int,int> diameterFast(Node* root) 
  {
        //base case
        if(root == NULL) 
        {
            pair<int,int> p = make_pair(0,0);
            return p;
        }

        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;

        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));;
        ans.second = max(left.second , right.second) + 1;

        return ans;
}
int diameter(Node* root) 
{

  return diameterFast(root).first;

}
int side(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int h1=side(root->left);
        int h2=side(root->right);
        int h3=heightoftree(root->left)+heightoftree(root->right)+1;
        int dia=max(h1,max(h2,h3));
        return dia;
    }
}