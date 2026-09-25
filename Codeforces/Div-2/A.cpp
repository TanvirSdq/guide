#include<iostream>
#include<string>
using namespace std;    

void palindromeflip() {
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    
    int coin = 0;
    int left = 0;
    int right = n-1;
    while(left < right) {
        if(s[left] != s[right]) {
            if(s[left] != c && s[right] != c) {
                coin += 2;
            } else {
                coin += 1;
            }
        }
        left++;
        right--;
    }
    cout<<coin<<'\n';
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        palindromeflip();
    }
    return 0;
}

