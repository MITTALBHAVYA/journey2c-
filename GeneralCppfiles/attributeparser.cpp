#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, i;
    cin >> n >> q;
    string code;
    vector<string> hrml;
    vector<string> query;
    cin.ignore();

    for (i = 0; i < n; i++)
    {
        getline(cin, code);
        hrml.push_back(code);
    }
    for (i = 0; i < q; i++)
    {
        getline(cin, code);
        query.push_back(code);
    }

    /*
    Sample Input

4 3
<tag1 value = "HelloWorld">
<tag2 name = "Name1">
</tag2>
</tag1>
tag1.tag2~name
tag1~name
tag1~value
Sample Output

Name1
Not Found!
HelloWorld
    */
    /*    printf("output");
        for (i = 0; i < n; i++)
        {
            cout << hrml[i] << endl;
        }*/

    return 0;
}