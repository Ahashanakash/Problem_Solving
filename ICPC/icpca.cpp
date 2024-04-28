#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to count the number of prime factors for a given number
int countPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            count++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    return count;
}

int longestSubarrayWithKAlmostPrimes(vector<int>& A, int K) {
    int n = A.size();
    int left = 0;
    int maxLen = 0;
    unordered_map<int, int> factorCount;

    for (int right = 0; right < n; right++) {
        int rightFactorCount = countPrimeFactors(A[right]);
        factorCount[rightFactorCount]++;

        while (factorCount.size() > K) {
            int leftFactorCount = countPrimeFactors(A[left]);
            factorCount[leftFactorCount]--;
            if (factorCount[leftFactorCount] == 0) {
                factorCount.erase(leftFactorCount);
            }
            left++;
        }

        if (factorCount.find(3) == factorCount.end() && factorCount.find(5) == factorCount.end()) {
            // No perfect prime factors (3 and 5) found
            maxLen = max(maxLen, right - left + 1);
        }
    }
    return maxLen;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = longestSubarrayWithKAlmostPrimes(A, K);
    cout << result << endl;

    return 0;
}
