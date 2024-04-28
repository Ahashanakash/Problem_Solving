#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long nonBeautifulSubarrays = 0;
        long long currentLength = 1;

        for (int i = 1; i < N; i++) {
            if (A[i] != A[i - 1]) {
                nonBeautifulSubarrays += (currentLength * (currentLength + 1)) / 2;
                currentLength = 1;
            } else {
                currentLength++;
            }
        }

        nonBeautifulSubarrays += (currentLength * (currentLength + 1)) / 2;

        cout << "Case " << t << ": " << N * (N + 1) / 2 - nonBeautifulSubarrays << endl;
    }

    return 0;
}
