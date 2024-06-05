#include<bits/stdc++.h>
using namespace std;
int main() {
    string input = "apple,,banana,orange,,grape";
    stringstream ss(input);
    vector<string> words;
    string word;
    while (getline(ss, word, ',')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    for (const auto& w : words) {
        cout << w << endl;
    }
    return 0;
}
