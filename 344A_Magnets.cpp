#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count = 1;
    cin >> n;
    int a[100000];
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
            count++;
    }

    cout << count << endl;

    return 0;
}