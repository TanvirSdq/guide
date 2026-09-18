#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Codeforces 112A - Petya and Strings
// In C: strcasecmp(s1, s2)
// In C++: transform strings to lowercase, then natural relational operators (<, >, ==) work directly!
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    for (char &c : s1) c = tolower(c);
    for (char &c : s2) c = tolower(c);

    if (s1 < s2) {
        cout << "-1\n";
    } else if (s1 > s2) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}

