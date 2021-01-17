#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(nullptr);
#define test int t;cin>>t;while(t--)


void solve() {
    int64_t n;
    cin>>n;

    vector<int> v(n);
    for(int&i : v){
        cin>>i;
    }

    sort(v.rbegin() , v.rend());

    int64_t alice=0,bob=0;

    for(int i=0 ; i<n ; ++i){
        if(i%2==0 and v[i]%2==0){
            alice+=v[i];
        }
        else if(i%2==1 and v[i]%2==1){
            bob+=v[i];
        }
    }
    
    if(alice>bob){
        cout<<"Alice"<<"\n";
    }  
    else if(alice==bob){
        cout<<"Tie"<<"\n";
    }   
    else{
        cout<<"Bob"<<"\n";
    }   

}

int main() {
    fast;
test{
    solve();
}
    return 0;
}