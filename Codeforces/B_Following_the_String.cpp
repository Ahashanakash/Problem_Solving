#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

string construct_string(vector<int>& trace) {
    int n = trace.size();
    string s(n, 'a');
    vector<bool> used(26, false);

    for (int i = 0; i < n; ++i) {
        int count = trace[i];
        int j = 0;
        while (count > 0) {
            if (!used[j]) {
                count--;
            }
            j++;
        }
        while (used[j]) {
            j++;
        }
        s[i] = 'a' + j;
        used[j] = true;
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> trace(n);

        for (int i = 0; i < n; ++i) {
            cin >> trace[i];
        }

        string result = construct_string(trace);
        cout << result << endl;
    }

    return 0;
}
