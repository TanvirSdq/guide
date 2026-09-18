#include <iostream>
#include <string>
#include <set>

using namespace std;

// Codeforces 236A - Boy or Girl
// In C: 26-letter string, nested loops, seen[26] boolean tracking
// In C++: std::set<char> filters out duplicates automatically
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    set<char> unique_chars(s.begin(), s.end());

    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}

