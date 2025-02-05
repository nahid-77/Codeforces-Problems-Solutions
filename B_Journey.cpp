// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, a, b, c, count = 0;
//         cin >> n >> a >> b >> c;
//         while (n > 0)
//         {
//             if (n > 0)
//             {
//                 n = n - a;
//                 count++;
//             }
//             if (n > 0)
//             {
//                 n = n - b;
//                 count++;
//             }
//             if (n > 0)
//             {
//                 n = n - c;
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<long long> walk = {a, b, c};
        long long total = 0;
        int day = 0;
        long long cycle_sum = a + b + c;

        long long complete_cycles = n / cycle_sum;
        long long remaining_distance = n % cycle_sum;

        total = complete_cycles * cycle_sum;
        day = complete_cycles * 3;

        for (int i = 0; total < n; i++, day++)
        {
            total += walk[i % 3];
        }

        cout << day << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n, a, b, c;
//         cin >> n >> a >> b >> c;
//         long long total = 0;
//         int day = 0;

//         while (total < n) {
//             if (day % 3 == 0) total += a;
//             else if (day % 3 == 1) total += b;
//             else total += c;
//             day++;
//         }

//         cout << day << endl;
//     }
//     return 0;
// }
