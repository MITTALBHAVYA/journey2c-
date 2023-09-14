#include <bits/stdc++.h>
#include <chrono>
using namespace std;
void bubbleSort(int n,int arr[])
{
  int i,j;
  for(i=0;i<n-1;i++)
  {
    bool swapped=false;
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
    }
    if(swapped==false)
    {
        break;
    }
  }
  cout<<"bubble sorted array "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void inseSort(int n,int arr[])
{
   int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
      cout<<"insertion sorted array "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void selecSort(int n,int arr[])
{
        int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
 
        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
    cout<<"selection sorted array "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
    /*auto start = chrono::high_resolution_clock::now();
    auto end = chrono::high_resolution_clock::now();
    Double time_taken =
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;*/
    int n;
    cout<<"ENTER THE SIZE OF ARRAY "<<endl;
    cin>>n;
    int ass[n],des[n];
    cout<<"ENTER THE ARRAY IN ASCENDING AND DECENDING ORDER"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ass[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>des[i];
    }
    cout<<"assending check"<<endl;
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(n,ass);
    auto end = chrono::high_resolution_clock::now();
    double time_taken =
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    cout<<"decending check"<<endl;
    start = chrono::high_resolution_clock::now();
    bubbleSort(n,des);
    end = chrono::high_resolution_clock::now();
    time_taken =chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    cout<<"ENTER THE ARRAY IN ASCENDING AND DECENDING ORDER"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ass[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>des[i];
    }
    cout<<"assending check"<<endl;
    start = chrono::high_resolution_clock::now();
    inseSort(n,ass);
    end = chrono::high_resolution_clock::now();
    time_taken =
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    cout<<"decending check"<<endl;
    start = chrono::high_resolution_clock::now();
    inseSort(n,des);
    end = chrono::high_resolution_clock::now();
    time_taken =chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    cout<<"ENTER THE ARRAY IN ASCENDING AND DECENDING ORDER"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ass[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>des[i];
    }
    cout<<"assending check"<<endl;
    start = chrono::high_resolution_clock::now();
    selecSort(n,ass);
    end = chrono::high_resolution_clock::now();
    time_taken =
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    cout<<"decending check"<<endl;
    start = chrono::high_resolution_clock::now();
    selecSort(n,des);
    end = chrono::high_resolution_clock::now();
    time_taken =chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;

}