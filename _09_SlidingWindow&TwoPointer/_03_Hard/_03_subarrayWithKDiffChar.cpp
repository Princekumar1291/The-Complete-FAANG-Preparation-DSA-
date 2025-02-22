// Function to calculate the number of subarrays with at most K distinct elements


#include <bits/stdc++.h> 
using namespace std;

int most_k_chars(string& s, int k) {
    unordered_map<char, int> map;
    int num = 0, left = 0;
    for (int i = 0; i < s.size(); i++) {
        map[s[i]]++;
        while (map.size() > k) {
            map[s[left]]--;
            if (map[s[left]] == 0) {
                map.erase(s[left]);
            }
            left++;
        }
        num += i - left + 1;
    }
    return num;
}

// Function to calculate the number of subarrays with exactly K distinct elements
int exact_k_chars(string& s, int k) {
    return most_k_chars(s, k) - most_k_chars(s, k - 1);
}

// Driver Program
int main() {
    string s1 = "pqpqs";
    int k = 2;
    cout << "Total substrings with exactly " << k
         << " distinct characters: "
         << exact_k_chars(s1, k) << endl;

    string s2 = "aabab";
    k = 2;
    cout << "Total substrings with exactly " << k
         << " distinct characters: "
         << exact_k_chars(s2, k) << endl;

    return 0;
}
