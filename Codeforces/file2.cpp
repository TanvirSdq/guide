#include<iostream>
#include<algorithm>
using namespace std;

void score() {
    long long a, b, c;
    cin>>a>>b>>c;

    long long A_takes = llabs(a+c-b);    
    long long B_takes = llabs(b-a);

    cout<<max(A_takes, B_takes)<<'\n';

}

int main() {
    int t;
    cin>>t;
    while(t--) {
        score();
    }
    return 0;
}

