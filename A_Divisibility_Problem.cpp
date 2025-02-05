#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, moves;
    cin >> t;
    int a[t], b[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (a[i] % b[i] == 0)
        {
            moves = 0;
            cout << moves << endl;
        }
        else
        {
            moves = b[i] - (a[i] % b[i]);
            cout << moves << endl;
        }
    }

    return 0;
}