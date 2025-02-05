#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, result;
    char dot = '.';
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (char c : s)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            result.push_back(dot);
            result.push_back(c);
        }
    }

    cout << result << endl;

    return 0;
}
