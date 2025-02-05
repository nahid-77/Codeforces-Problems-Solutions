// This is my final or updated solution:

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << "I hate";
        }
        else
        {
            cout << "I love";
        }

        if (i != n)
        {
            cout << " that ";
        }
    }

    cout << " it" << endl;

    return 0;
}

// This was my first solution (Trial and Error one):

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << "I hate ";
//             if (n == 1 || i == n)
//             {
//                 cout << "it ";
//             }
//             else
//             {
//                 cout << "that ";
//             }
//         }
//         else
//         {
//             cout << "I love ";
//             if (i == n)
//             {
//                 cout << "it ";
//             }
//             else
//             {
//                 cout << "that ";
//             }
//         }
//     }

//     return 0;
// }
