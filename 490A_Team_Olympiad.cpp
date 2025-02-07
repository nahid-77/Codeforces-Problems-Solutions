#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    queue<int> ones;
    queue<int> twos;
    queue<int> threes;

    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;

        if (k == 1)
            ones.push(i);

        if (k == 2)
            twos.push(i);

        if (k == 3)
            threes.push(i);
    }

    int min = INT32_MAX;
    if (min > ones.size())
        min = ones.size();

    if (min > twos.size())
        min = twos.size();

    if (min > threes.size())
        min = threes.size();

    cout << min << endl;

    for (int i = 1; i <= min; i++)
    {
        cout << ones.front() << " " << twos.front() << " " << threes.front() << " " << endl;

        ones.pop();
        twos.pop();
        threes.pop();
    }

    return 0;
}
