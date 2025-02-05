#include <iostream>
using namespace std;

int main()
{
    int a[4], count = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] == a[j])
            {
                count += 1;
                break;  // This prevents counting the same duplicate again
            }
        }
    }

    cout << count;

    return 0;
}
