//Product of three factor equal to the number and factors are not equal and also no one is 1

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to find all factors of a number
vector<int> findFactors(long long n) {
    vector<int> factors;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

// Function to check if three distinct factors can be found
string solve(long long n) {
    vector<int> factors = findFactors(n);

    // We need at least 3 distinct factors
    if (factors.size() < 3) {
        return "NO";
    }

    // Check combinations of factors
    for (size_t i = 0; i < factors.size(); ++i) {
        for (size_t j = i + 1; j < factors.size(); ++j) {
            for (size_t k = j + 1; k < factors.size(); ++k) {
                long long a = factors[i];
                long long b = factors[j];
                long long c = factors[k];
                if (a * b * c == n) {
                    return "YES\n" + to_string(a) + " " + to_string(b) + " " + to_string(c);
                }
            }
        }
    }
    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << '\n';
    }

    return 0;
}
