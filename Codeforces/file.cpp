#include<iostream>
#include<algorithm>
using namespace std;    

void weak() {
    int n, a1, a2, a3, i;
    cin>>n>>a1>>a2>>a3;

    i = min({a1, a2, a3});
    cout<<n-i<<'\n';
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        weak();
    }
    return 0;
}

