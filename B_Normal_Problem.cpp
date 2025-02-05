#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;

        reverse(a.begin(), a.end());

        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == 'p')
            {
                a[j] = 'q';
            }
            else if (a[j] == 'q')
            {
                a[j] = 'p';
            }
        }

        cout << a << endl;
    }

    return 0;
}