#include <iostream>
#include <string>

using namespace std;

// Codeforces 71A - Way Too Long Words
// In C: char word[105]; scanf("%s", word); strlen(word); word[0], word[l-1]
// In C++: std::string handles sizing automatically with .length(), .front(), .back()
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.length() > 10) {
            // s.front() is s[0], s.back() is s[s.length()-1]
            cout << s.front() << s.length() - 2 << s.back() << "\n";
        } else {
            cout << s << "\n";
        }
    }

    return 0;
}

