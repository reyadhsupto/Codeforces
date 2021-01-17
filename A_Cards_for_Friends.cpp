#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(nullptr);
#define test int t;cin>>t;while(t--)


void solve() {
    int w,h,n;
    cin>>w>>h>>n;
    int count=1;
        while(w%2==0 or h%2==0){
            if(w%2==0){
            w=w/2;
            count*=2;
            }
        else if(h%2==0){
            h=h/2;
            count*=2;
             }
        }
    
        
    if(count >=n){cout<<"YES"<<"\n";}
    else{cout<<"NO"<<"\n";}
}

int main() {
    fast;
test{
    solve();
}
    return 0;
}