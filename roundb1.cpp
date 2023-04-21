#include <iostream>
#include <string>

using namespace std;

char findNthValue(int n) {
    string sequence = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Initial sequence
    int len = sequence.length(); // Length of the initial sequence
    int i = 0; // Index to traverse the sequence

    // Keep generating the sequence until we reach n
    while (len < n) {
        char currentChar = sequence[i]; // Current character in the sequence
        int count = i + 1; // Number of times the current character appears consecutively

        // Append the current character 'count' number of times to the sequence
        for (int j = 0; j < count; j++) {
            sequence += currentChar;
        }

        len += count; // Update the length of the sequence
        i = (i + 1) % 26; // Move to the next character in the sequence
    }

    // Return the character at the nth place in the sequence
    return sequence[n - 1];
}

int main() {
    int t;
    cin>>t;
    int ca=1;
    while(t--)
    {
    int n;
    //cout << "Enter the value of n: ";
    cin >> n;

    char nthValue = findNthValue(n);
    cout<<"Case #"<<ca<<": "<<nthValue<<endl;
    }
    ca++;
    return 0;
}