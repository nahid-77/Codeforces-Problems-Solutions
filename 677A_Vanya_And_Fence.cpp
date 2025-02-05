#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, minWidth = 0;
    cin >> n >> h;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            minWidth = minWidth + 2;
        }
        else
        {
            minWidth = minWidth + 1;
        }
    }

    cout << minWidth << endl;

    return 0;
}