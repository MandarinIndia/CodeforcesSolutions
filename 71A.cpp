#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";
    while (n--)
    {
        cin >> s;
        if (s.size() <= 10)
            cout << s << endl;
        else
        {
            cout << s[0] + to_string(s.size() - 2) + s[s.size() - 1] << endl;
        }
    }

    return 0;
}