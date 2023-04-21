// lower to upper and upper to lower character
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string ltu(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
        }
    }
    return str;
}
string utl(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
int main()
{
    string str;
    cin >> str;
    cout << "the upper case  :: " << endl;
    string uper = ltu(str);
    cout << uper << endl;
    cout << "the lower case  :: " << endl;
    string low = utl(str);
    cout << low << endl;
}