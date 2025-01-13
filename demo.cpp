// C++ program to demonstate the use of
// std::next_permutation() function
#include <bits/stdc++.h>
using namespace std;

int main() {

    string v="132";
  
    // Printing all the greater permutations
    // of the current vector
    do {
        for (auto i: v) cout << i << " ";
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    cout<<v;
    return 0;
}