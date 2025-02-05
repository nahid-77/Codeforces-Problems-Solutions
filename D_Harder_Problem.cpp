#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b;
        unordered_map<int, int> frequency;
        int current_mode = -1;
        int max_frequency = 0;

        for (int i = 0; i < n; i++) {
            int required_mode = a[i];

            if (frequency[required_mode] == max_frequency) {
                current_mode = required_mode;
            } else if (frequency[required_mode] > max_frequency) {
                max_frequency = frequency[required_mode];
                current_mode = required_mode;
            }

            frequency[required_mode]++;
            b.push_back(required_mode);

            cout << required_mode << " ";
        }
        cout << endl;
    }

    return 0;
}
