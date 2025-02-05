#include <iostream>
#include <string>

using namespace std;

string Palindrome(string s)
{
    int n = s.length();

    for (int i = 0; i < n / 2; ++i)
    {
        char left = s[i];
        char right = s[n - 1 - i];

        if (left == '?' && right == '?')
        {
            s[i] = s[n - 1 - i] = 'a';
        }

        else if (left == '?')
        {
            s[i] = right;
        }

        else if (right == '?')
        {
            s[n - 1 - i] = left;
        }

        else if (left != right)
        {
            return "-1";
        }
    }

    if (n % 2 == 1 && s[n / 2] == '?')
    {
        s[n / 2] = 'a';
    }

    return s;
}

int main()
{
    string s;
    cin >> s;

    string result = Palindrome(s);
    cout << result << endl;

    return 0;
}
