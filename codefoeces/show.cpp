#include <bits/stdc++.h>
using namespace std;
int main() {
   int test;
   cin>>test;
   while(test--)
   {
     int seats,people;
     cin>>people>>seats;
     int left=0;int right=seats-1;
     vector<int>valid(seats,0);
     int count=0;
     /*
-1:next to leftmost, or  if seat 1 is taken, then leave the show. If there is no one currently sitting, sit in seat m.
-2:Sit in the seat next to the right of the rightmost person who is already sitting, or if seat m
 is taken, then leave the show. If there is no one currently sitting, sit in seat 1
number:Sit in the seat numbered xi. If this seat is taken, then leave the show
     */
    for(int i=0;i<people;i++)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
           if(valid[seats-1]==0)
           {
            valid[seats-1]=1;
            count++;
            right--;
           }
           else{
            if(valid[left]==0 && left<seats)
            {
                valid[left]=1;
                count++;
                left++;
            }
           }
        }
        if(x==-2)
        {
           if(valid[0]==0)
           {
            valid[0]=1;
            count++;
            left++;
           }
           else{
            if(valid[right]==0 && right>=0)
            {
                valid[right]=1;
                count++;
                right--;
            }
           }

        }
        if(x>0)
        {
            if(valid[x-1]==0)
            {
                valid[x-1]=1;
                count++;
                if(x-1==left)
                {
                    left++;
                }
                if(x-1==right)
                {
                    right--;
                }
            }
        }
    }
    cout<<count<<endl;
   }
}