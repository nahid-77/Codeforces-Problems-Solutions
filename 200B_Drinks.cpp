#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, x, ans, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = sum + x;
    }

    ans = sum / n;
    cout << ans << endl;

    return 0;
}