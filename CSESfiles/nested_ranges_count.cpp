#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main() {
    
    multiset<int> myMultiSet;

    auto low = myMultiSet.lower_bound(6);
    auto upp = myMultiSet.upper_bound(6);
    
    cout << "low =" << " " << distance(myMultiSet.begin(), low) << " upp =" << " " << distance(myMultiSet.begin(), upp) << endl;
    cout<<4-distance(myMultiSet.begin(), low)<<" "<<4-distance(myMultiSet.begin(), upp) <<endl;
    myMultiSet.insert(6);
    low = myMultiSet.lower_bound(6);
    upp = myMultiSet.upper_bound(6);
    
    cout << "low =" << " " << distance(myMultiSet.begin(), low) << " upp =" << " " << distance(myMultiSet.begin(), upp) << endl;
    cout<<4-distance(myMultiSet.begin(), low)<<" "<<4-distance(myMultiSet.begin(), upp) <<endl;
    for (const auto& elem : myMultiSet) {
        
        cout << elem << " ";
    }
    
    cout << endl;
    low = myMultiSet.lower_bound(4);
    upp = myMultiSet.upper_bound(4);
    
    cout << "low =" << " " << distance(myMultiSet.begin(), low) << " upp =" << " " << distance(myMultiSet.begin(), upp) << endl;
    cout<<4-distance(myMultiSet.begin(), low)<<" "<<4-distance(myMultiSet.begin(), upp) <<endl;
    myMultiSet.insert(4);
    low = myMultiSet.lower_bound(4);
    upp = myMultiSet.upper_bound(4);
    
    cout << "low =" << " " << distance(myMultiSet.begin(), low) << " upp =" << " " << distance(myMultiSet.begin(), upp) << endl;
    cout<<4-distance(myMultiSet.begin(), low)<<" "<<4-distance(myMultiSet.begin(), upp) <<endl;
    for (const auto& elem : myMultiSet) {
        
        cout << elem << " ";
    }
    
    cout << endl;
    low = myMultiSet.lower_bound(8);
    upp = myMultiSet.upper_bound(8);
    
    cout << "low =" << " " << distance(myMultiSet.begin(), low) << " upp =" << " " << distance(myMultiSet.begin(), upp) << endl;
    cout<<4-distance(myMultiSet.begin(), low)<<" "<<4-distance(myMultiSet.begin(), upp) <<endl;
    myMultiSet.insert(8);
    low = myMultiSet.lower_bound(8);
    upp = myMultiSet.upper_bound(8);
    
    cout << "low =" << " " << distance(myMultiSet.begin(), low) << " upp =" << " " << distance(myMultiSet.begin(), upp) << endl;
    cout<<4-distance(myMultiSet.begin(), low)<<" "<<4-distance(myMultiSet.begin(), upp) <<endl;
    for (const auto& elem : myMultiSet) {
        
        cout << elem << " ";
    }
    
    cout << endl;
    
    low = myMultiSet.lower_bound(6);
    upp = myMultiSet.upper_bound(6);
    
    cout << "low =" << " " << distance(myMultiSet.begin(), low) << " upp =" << " " << distance(myMultiSet.begin(), upp) << endl;
    cout<<4-distance(myMultiSet.begin(), low)<<" "<<4-distance(myMultiSet.begin(), upp) <<endl;
    myMultiSet.insert(6);
    low = myMultiSet.lower_bound(6);
    upp = myMultiSet.upper_bound(6);
    
    cout << "low =" << " " << distance(myMultiSet.begin(), low) << " upp =" << " " << distance(myMultiSet.begin(), upp) << endl;
    cout<<4-distance(myMultiSet.begin(), low)<<" "<<4-distance(myMultiSet.begin(), upp) <<endl;
    for (const auto& elem : myMultiSet) {
        
        cout << elem << " ";
    }
    
    cout << endl;

    // Display the contents of the multiset
    
    cout << "Multiset elements with duplicates: ";
    for (const auto& elem : myMultiSet) {
        
        cout << elem << " ";
    }
    
    cout << endl;
    
    multiset<int> mySet;

    low = mySet.lower_bound(8);
    upp = mySet.upper_bound(8);
    
    cout << "low =" << " " << distance(mySet.begin(), low) << " upp =" << " " << distance(mySet.begin(), upp) << endl;
    cout<<4-distance(mySet.begin(), low)<<" "<<4-distance(mySet.begin(), upp) <<endl;
    mySet.insert(8);
    low = mySet.lower_bound(8);
    upp = mySet.upper_bound(8);
    
    cout << "low =" << " " << distance(mySet.begin(), low) << " upp =" << " " << distance(mySet.begin(), upp) << endl;
    cout<<4-distance(mySet.begin(), low)<<" "<<4-distance(mySet.begin(), upp) <<endl;
    for (const auto& elem : mySet) {
        
        cout << elem << " ";
    }
    
    cout << endl;
    low = mySet.lower_bound(6);
    upp = mySet.upper_bound(6);
    
    cout << "low =" << " " << distance(mySet.begin(), low) << " upp =" << " " << distance(mySet.begin(), upp) << endl;
    cout<<4-distance(mySet.begin(), low)<<" "<<4-distance(mySet.begin(), upp) <<endl;
    mySet.insert(6);
    low = mySet.lower_bound(6);
    upp = mySet.upper_bound(6);
    
    cout << "low =" << " " << distance(mySet.begin(), low) << " upp =" << " " << distance(mySet.begin(), upp) << endl;
    cout<<4-distance(mySet.begin(), low)<<" "<<4-distance(mySet.begin(), upp) <<endl;
    for (const auto& elem : mySet) {
        
        cout << elem << " ";
    }
    
    cout << endl;
    low = mySet.lower_bound(4);
    upp = mySet.upper_bound(4);
    
    cout << "low =" << " " << distance(mySet.begin(), low) << " upp =" << " " << distance(mySet.begin(), upp) << endl;
    cout<<4-distance(mySet.begin(), low)<<" "<<4-distance(mySet.begin(), upp) <<endl;
    mySet.insert(4);
    low = mySet.lower_bound(4);
    upp = mySet.upper_bound(4);
    
    cout << "low =" << " " << distance(mySet.begin(), low) << " upp =" << " " << distance(mySet.begin(), upp) << endl;
    cout<<4-distance(mySet.begin(), low)<<" "<<4-distance(mySet.begin(), upp) <<endl;
    for (const auto& elem : mySet) {
        
        cout << elem << " ";
    }
    
    cout << endl;
    
    low = mySet.lower_bound(6);
    upp = mySet.upper_bound(6);
    
    cout << "low =" << " " << distance(mySet.begin(), low) << " upp =" << " " << distance(mySet.begin(), upp) << endl;
    cout<<4-distance(mySet.begin(), low)<<" "<<4-distance(mySet.begin(), upp) <<endl;
    mySet.insert(6);
    low = mySet.lower_bound(6);
    upp = mySet.upper_bound(6);
    
    cout << "low =" << " " << distance(mySet.begin(), low) << " upp =" << " " << distance(mySet.begin(), upp) << endl;
    cout<<4-distance(mySet.begin(), low)<<" "<<4-distance(mySet.begin(), upp) <<endl;
    for (const auto& elem : mySet) {
        
        cout << elem << " ";
    }
    
    cout << endl;

    // Display the contents of the multiset
    
    cout << "Multiset elements with duplicates: ";
    for (const auto& elem : mySet) {
        
        cout << elem << " ";
    }
    
    cout << endl;

    return 0;
}
