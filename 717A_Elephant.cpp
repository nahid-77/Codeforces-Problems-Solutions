#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    while (n > 0)
    {
        if (n >= 5)
        {
            n = n - 5;
            count = count + 1;
        }
        else if (n >= 4)
        {
            n = n - 4;
            count = count + 1;
        }
        else if (n >= 3)
        {
            n = n - 3;
            count = count + 1;
        }
        else if (n >= 2)
        {
            n = n - 2;
            count = count + 1;
        }
        else if (n >= 1)
        {
            n = n - 1;
            count = count + 1;
        }
    }
    cout << count << endl;

    return 0;
}