#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, fN = 0;
    cin >> n;

    if (n % 2 == 0)
    {
        fN = n / 2;
    }
    else
    {
        fN = -(n + 1) / 2;
    }

    cout << fN << endl;

    return 0;
}