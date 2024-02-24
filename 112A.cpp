#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    //  int sum1 = 0, sum2 = 0;

    // for (auto ch : s1)
    // {
    //     sum1 += ch - 'a';
    // }
    // for (auto ch : s2)
    // {
    //     sum2 += ch - 'a';
    // }
    // if (sum1 > sum2)
    // {
    //     cout << 1 << endl;
    // }
    // else if (sum1 < sum2)
    // {
    //     cout << -1 << endl;
    // }
    // else
    // {
    //     cout << 0 << endl;
    // }

    if (s1 < s2)
    {
        cout << -1 << endl;
    }
    else if (s1 > s2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}