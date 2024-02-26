#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arrSum = 0;
    for (int i = 0; i < n; i++)
    {
        arrSum += arr[i];
    }
    // cout << arrSum << endl;
    // cout << ((double)(arrSum / 2)) << endl;
    sort(arr, arr + n);

    int count = 0;
    int pointer = n - 1;
    int sum = 0;
    while (pointer >= 0)
    {
        if (sum > arrSum / 2)
            break;
        sum += arr[pointer];
        count++;
        pointer--;
        // cout << "h" << endl;
    }
    cout << count << endl;
    return 0;
}