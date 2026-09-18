#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Codeforces 339A - Helpful Maths
// In C: custom compare() function, qsort() with void pointers, manual string building
// In C++: extract digits into vector, sort(), then print with separator
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<char> digits;
    for (int i = 0; i < (int)s.size(); i += 2) {
        digits.push_back(s[i]);
    }

    sort(digits.begin(), digits.end());

    for (int i = 0; i < (int)digits.size(); i++) {
        cout << digits[i] << (i + 1 == (int)digits.size() ? "" : "+");
    }
    cout << "\n";

    return 0;
}

