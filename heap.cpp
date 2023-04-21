#include<iostream>
using namespace std;

class heap
{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int val)
    {
        size++;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
            {
                return;
            }
        }
    }
    void printheap()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    void deletefromheap()
    {
        if(size==0)
        {
            cout<<"NOTHING TO DELETE HERE"<<endl;
            return;
        }
        //first element ko last wala se replace kardo
        //size ko kam kar do
        //abb ek loop banao i<size i start from 1
        //now form a condition to check the continued element represented by i and compare it
        //from child left and child right element
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size)
        {
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(arr[i]<arr[leftindex]&&leftindex<size)
            {
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(arr[i]<arr[rightindex]&&rightindex<size)
            {
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else
            {
                return;
            }
        }
    }
};
void heapify(int arr[],int n,int i)
    {
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(left <= n && arr[largest]<arr[left])
        {
            largest=left;
        }
        if(right <= n && arr[largest]<arr[right])
        {
            largest=right;
        }
        if(largest!=i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
void heapsort(int arr[],int n)
{
    int size=n;
    while(size>1)
    {
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(58);
    h.insert(98);
    h.insert(55);
    h.insert(78);
    h.insert(63);
    h.printheap();
    h.deletefromheap();
    cout<<endl;
    h.printheap();
   int a[6]={-1,54,53,55,52,50};
   int n=5;
   for(int i=n/2;i>0;i--)
   {
    heapify(a,n,i);
   }
   cout<<"heapified array here"<<endl;
   for(int i=1;i<=n;i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<endl;

}