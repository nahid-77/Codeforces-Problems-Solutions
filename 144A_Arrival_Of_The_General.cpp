#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxvalue = 0;
    int minvalue = 101;
    int maxindex = 0;
    int minindex = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > maxvalue) {
            maxindex = i;
            maxvalue = a;
        }
        if (a <= minvalue) {
            minindex = i;
            minvalue = a;
        }
    }

    int swaps = maxindex + (n - 1 - minindex);
    if (maxindex > minindex) {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}
