#include <bits/stdc++.h> 

void addsolution(vector<vector<int>>&board,vector<vector<int>>&ans,int n){
    vector<int>temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row,int col,map<int,bool>&colmap,map<int,bool>&upperdiagonal,map<int,bool>&lowerdiagonal,int n){
   
    //checking for if queen is present in previous diffrent col of same row 
   if(colmap[row]==1)
       return false;
    //left to top diagonal
    if(upperdiagonal[(n-1)+(col-row)]==1)
        return false;
    //left to bottom diagonal
    if(lowerdiagonal[row+col]==1)
        return false;
    return true;
}

void solve(int col,vector<vector<int>>&board,vector<vector<int>>&ans,int n,map<int,bool>&colmap,map<int,bool>&upperdiagonal,map<int,bool>&lowerdiagonal){
    //base case
    if(col==n){
        addsolution(board,ans,n);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,colmap,upperdiagonal,lowerdiagonal,n)){
            board[row][col]=1;
            colmap[row]=true;
            upperdiagonal[(n-1)+(col-row)]=1;
            lowerdiagonal[row+col]=1;
            solve(col+1,board,ans,n,colmap,upperdiagonal,lowerdiagonal);
            colmap[row]=false;
            upperdiagonal[(n-1)+(col-row)]=0;
            lowerdiagonal[row+col]=0;
            board[row][col]=0;            
        }
    }
}

vector<vector<int>> nQueens(int n)
{
	vector<vector<int>>board(n,vector<int>(n,0));
    vector<vector<int>>ans;
    map<int,bool>colmap;
    map<int,bool>upperdiagonal;
    map<int,bool>lowerdiagonal;

    solve(0,board,ans,n,colmap,upperdiagonal,lowerdiagonal);
    return ans;
}