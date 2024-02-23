#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value = 0;
    string s = "";
    while (n--)
    {

        cin >> s;

        if (s[0] == '+')
        {
            ++value;
        }
        else if (s[1] == '+')
        {
            value++;
        }
        else if (s[0] == '-')
        {
            --value;
        }
        else if (s[1] == '-')
        {
            value--;
        }
    }
    cout << value << endl;
    return 0;
}