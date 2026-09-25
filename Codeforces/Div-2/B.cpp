#include<iostream>
#include<map>
using namespace std;    

void sortarr() {

    int n,x;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin>>x;
        mp[x]++;
    }
    while(n>0) {
        for(auto it=mp.rbegin(); it!=mp.rend(); it++) {
            if(it->second > 0) {
                cout<<it->first<<" ";
                it->second--;
                n--;
            }
        }
    }
    cout<<'\n';
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        sortarr();
    }
    return 0;
}