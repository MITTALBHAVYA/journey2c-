#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        std::cout <<source << "  " << destination << std::endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    std::cout << source << "  " << destination << std::endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;
   // std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;
    
    std::cout << pow(2,numDisks) - 1 << std::endl;
    towerOfHanoi(numDisks, '1', '2', '3');
    
    return 0;
}