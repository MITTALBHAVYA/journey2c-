#include <iostream>
using namespace std;
int solve(int n, int[] arr, int k){
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            arr[i] = arr[i]-1;
        }
    }
    unordered_map<int, int> mp;
    int currentSum = 0, maxSum = 0;
    int left = 0, i = 0;
    while (i < k && i < n) {
        currentSum += arr[i];
        mp[arr[i]]++;
        i++;
    }
    if (mp.size() == k) {
        maxSum = currentSum;
    }
    for (int i = k; i < n; i++) {
        mp[arr[i]]++;
        mp[arr[left]]--;
        if (mp[arr[left]] == 0) {
            mp.erase(arr[left]);
        }
        currentSum += arr[i];
        currentSum -= arr[left];
        if (mp.size() == k) {
            maxSum = max(maxSum, currentSum);
        }
        left++;
    }
    return maxSum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans = solve(n,arr,k);
    return 0;
}