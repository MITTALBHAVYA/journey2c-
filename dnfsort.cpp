#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void dnfSort(int arr[],int len)
{
    int low=0,mid=0;
    int high=len-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
           int temp=arr[low];
           arr[low]=arr[mid];
           arr[mid]=temp;
           low++;mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            int temp=arr[high];
           arr[high]=arr[mid];
           arr[mid]=temp;
            high--;
        }
    }
}
void printArr(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int len;
    cout<<"ENTER THE LENGTH OF ARRAY "<<endl;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cout<<"ENTER ELEMENT NUMBER "<<i+1<<endl;
        cin>>arr[i];
    }
    printArr(arr,len);
    cout<<"JEEEEEE"<<endl;
    dnfSort(arr,len);
    cout<<"JEEEEEE"<<endl;
    printArr(arr,len);
    return 0;
}