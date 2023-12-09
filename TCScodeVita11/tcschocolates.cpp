#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxPoints(vector<int>& chocolates, int initial_chocolates) {
    sort(chocolates.begin(),chocolates.end()); 
    int points = 1; 
    int maxi=1;
    int start=0,end=chocolates.size()-1;
    while(start<=end){
        if(initial_chocolates>=chocolates[start]){
            points++;
            initial_chocolates-=chocolates[start];
            start++;
        }
        else{
            points--;
            initial_chocolates+=chocolates[end];
            end--;
        }
        maxi=max(maxi,points);
    }
    return maxi;
}

int main() {
    vector<int> chocolates_list;
    int chocolate;
    while (cin >> chocolate) {
        chocolates_list.push_back(chocolate);
        if (cin.get() == '\n') {
            break;
        }
    }
    int initial_chocolates;
    cin >> initial_chocolates;

    int result = maxPoints(chocolates_list, initial_chocolates);
    cout << result;
    
    return 0;
}