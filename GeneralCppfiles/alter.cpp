#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
string find_anagram_without_common_chars(const string& S) {
    string target="codechef";
    unordered_map<char, int> s_counter;
    unordered_map<char, int> target_counter;

    // Count the frequency of characters in both strings
    for (char c : S) {
        s_counter[c]++;
    }
    for (char c : target) {
        target_counter[c]++;
    }

    string anagram;
    for (char c : S) {
        if (s_counter[c] > 0 && target_counter[c] == 0) {
            anagram.push_back(c);
            s_counter[c]--;
        }
    }

    if (anagram.length() == S.length()) {
        return anagram;
    }

    return "";  // No valid anagram found
}

int main() {
  int test;
  cin>>test;
  while(test--)
  {
    string S;
    cin>>S;
    string anagram = find_anagram_without_common_chars(S);
    
    if (!anagram.empty()) {
        cout << anagram << endl;
    } else {
        cout << -1 << endl;
    }
  }
    return 0;
}
