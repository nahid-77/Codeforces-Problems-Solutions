#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool levels[101] = {false};

    int p;
    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        int level;
        cin >> level;
        levels[level] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int level;
        cin >> level;
        levels[level] = true;
    }

    bool all_levels_passed = true;
    for (int i = 1; i <= n; ++i)
    {
        if (!levels[i])
        {
            all_levels_passed = false;
            break;
        }
    }

    if (all_levels_passed)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
