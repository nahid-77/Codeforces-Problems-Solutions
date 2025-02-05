#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    bool flag = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << "HARD" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "EASY" << endl;
    }

    return 0;
}