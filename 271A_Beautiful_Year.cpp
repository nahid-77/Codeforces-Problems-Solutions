#include <iostream>
using namespace std;

bool hasDistinctDigits(int year)
{
    int digits[10] = {0}; // Array to count the occurrences of each digit

    while (year > 0)
    {
        int digit = year % 10;
        digits[digit]++;
        if (digits[digit] > 1)
        {
            return false; // If any digit occurs more than once, return false
        }
        year /= 10;
    }
    return true;
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++; // Increment the year
        if (hasDistinctDigits(y))
        {
            cout << y << endl; // Output the year with distinct digits
            break;
        }
    }

    return 0;
}





// #include <iostream>
// using namespace std;

// bool hasUniqueDigits(int year) {
//     string yearStr = to_string(year);  // Convert the year to a string
//     for (int i = 0; i < yearStr.length(); ++i) {
//         for (int j = i + 1; j < yearStr.length(); ++j) {
//             if (yearStr[i] == yearStr[j]) {
//                 return false;  // If any digit is repeated, return false
//             }
//         }
//     }
//     return true;  // If all digits are unique, return true
// }

// int main() {
//     int y;
//     cin >> y;  // Read the input year

//     while (true) {
//         y++;  // Increment the year by 1
//         if (hasUniqueDigits(y)) {
//             cout << y << endl;  // Print the year with unique digits
//             break;  // Exit the loop
//         }
//     }

//     return 0;  // End the program
// }
