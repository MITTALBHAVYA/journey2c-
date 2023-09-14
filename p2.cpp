int LongestIncreasingSubsequenceLength(vector<int>& arr)
{
    int n=arr.size();
    if (n == 0) // boundary case
        return 0;

    vector<int> tail(n, 0);
    int length = 1; // always points empty slot in tail

    tail[0] = arr[0];

    for (int i = 1; i < n; i++) {

        // Do binary search for the element in
        // the range from begin to begin + length
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(tail.begin(), e, arr[i]);

        // If not present change the tail element to v[i]
        if (it == tail.begin() + length)
            tail[length++] = arr[i];
        else
            *it = arr[i];
    }

    return length;
}