#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character

    string input;
    getline(cin, input);

    // Parse the input string to extract id and rating pairs
    stringstream ss(input);
    vector<pair<int, int>> dishes;

    int id, rating;
    char delimiter;
    while (ss >> id >> delimiter >> rating) {
        dishes.push_back({id, rating});
    }
    int maxi=INT_MIN;
    
 return 0;
}