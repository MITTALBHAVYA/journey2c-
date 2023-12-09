#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    vector<string> inputdatastring(n);
    for (int i = 0; i < n; ++i) { 
        cin >> inputdatastring[i];
    }
    map<int, int> mp;
    vector<int> vect;
    vector<int> visited(inputdatastring.size(), 0);
    for (const auto& id : inputdatastring) {
        int pos = id.find(':');
        int looper = stoi(id.substr(0, pos));
        int dooper = stoi(id.substr(pos + 1));
        mp[looper] = dooper;
        vect.push_back(looper);
    }
    sort(vect.begin(), vect.end(), [&](int a, int b) {
        return mp[a] > mp[b];
    });

    int res = mp[vect[0]];
    
    vector<int> k;
    int j = find(vect.begin(), vect.end(), vect[0]) - vect.begin() - 1;
    k.push_back(vect[0]);
    while (j >= 0 && mp[vect[j]] < 0) {
        k.push_back(vect[j]);
        j -= 1;
    }
    int f;
    if (*max_element(k.begin(), k.end()) == vect[0]) {
        f = 1;
    } else {
        f = 0;
    }
    size_t x = k.size(); 
    vect.erase(remove(vect.begin(), vect.end(), vect[0]), vect.end());

    for (const auto& i : vect) {    
        vector<int> k;
        size_t j = find(vect.begin(), vect.end(), i) - vect.begin(); 
        k.push_back(i);
        while (j > 0 && mp[vect[j]] < 0) {
            k.push_back(vect[j]);
            j -= 1;
        }
        x += k.size();
        if (x >= vect.size()) {
            break;
        }
        if (f == 1) {
            res += mp[*max_element(k.begin(), k.end())];
        } else {
            res += mp[*min_element(k.begin(), k.end())];
        }
    } 
    cout << res;
    return 0;
}
