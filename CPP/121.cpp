#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Codeforces 281A - Word Capitalization
// In C: char s[]; (undefined array size risk) and toupper()
// In C++: std::string dynamically resizes, s[0] can be modified safely
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    cout << s << "\n";
    return 0;
}

