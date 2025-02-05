#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, cost = 0, borrow;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        cost = cost + (k * i);
    }
    borrow = cost - n;
    if (borrow > 0)
    {
        cout << borrow << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    
    return 0;
}

