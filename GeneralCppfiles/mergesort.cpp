// THIS IS MY FIRST STEP TOWARDS MERGE SORT
/*
WHAT IS ACTUALLY I AM GOING TO DO..
FIRST OF ALL TIMECOMPLEXITY IS nlog(n)
get an array
1.divide it into halves..upto every single element get seprated...
2.treat every element of array as a sorted array
3.than merge the two sorted array.
4.let start with the function to merge two sorted array {an array with two different that lies after halves sorted part}
5.than make function to divide and merge
MERGE SORT ::::
*/
#include <iostream>
#include "bits/stdc++.h"
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    //here describe length of both sorted array in the given single array 
    int len1 = mid - low + 1;
    int len2 = high - mid;
    //sa1 and sa2 here sorted array in the given array 
    int sa1[len1];
    int sa2[len2];
    for (int i = 0; i < len1; i++)
    {
        sa1[i] = arr[low + i];
    }
    for (int i = 0; i < len2; i++)
    {
        sa2[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    while (i < len1 && j < len2)
    {
        if (sa1[i] < sa2[j])
        {
            arr[k] = sa1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = sa2[j];
            k++;
            j++;
        }
    }
    while (i < len1)
    {
        arr[k] = sa1[i];
        i++;
        k++;
    }
    while (j < len2)
    {
        arr[k] = sa2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        //the recurssion anthem 
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    cout<<"ENTER THE LENGTH OF ARRAY"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cout<<"ENTER THE "<<i+1<<" ELEMENT"<<endl;
      cin>>arr[i];
    }
    mergeSort(arr,0,n);
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
}