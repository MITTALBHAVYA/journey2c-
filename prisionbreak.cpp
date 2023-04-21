#include<iostream>
#include<bits/stdc++.h>
void printCross(int size_px)
{
    //size px always in odd
   /*// 1 0 0 0 0 0 1 
        0 0 0 0 0 0 0
        0 0 0 0 0 0 0 
        0 0 0 0 0 0 0 
        0 0 0 0 0 0 0 
        0 0 0 0 0 0 0 
        1 0 0 0 0 0 1 */
        int n=size_px;
        int arr[n][n];
        int a=0;
    while(n!=0)
    {
        for(int i=a;i<n-1;i++)
        {
            if(a==i)
            {
                arr[a][i]="1";
            }
            else
            {
            arr[a][i]="$";
            }
        }
        //move down
        for(int i=a;i<n-1;i++)
        {
            arr[i][a]="&";
        }
        //move left
        for(int i=0;i<n;i++)
        {
            arr[a][n-i-1]="*";
        }
        //move up
        for(int i=0;i<n;i++)
        {
            arr[n-i-1][a]="^";
        }
        n--;
        a++;
    }
}
int main()
{

}