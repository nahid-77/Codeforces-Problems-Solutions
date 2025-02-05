#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int sum = 0;

        for (int i = 0, j = 1; i < n; i++, j++)
        {
            if (j < n)
            {
                int diff = a[i] - b[j];

                if (diff > 0)
                {
                    sum += diff;
                }
            }
            else if (j >= n)
            {
                sum += a[i] - 0;
            }
        }

        cout << sum << endl;
    }

    return 0;
    
}