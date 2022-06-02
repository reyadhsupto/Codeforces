#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &i:v)cin>>i;
    sort(v.begin(),v.end());
    int cnt=0;
    int a=v[0];
    for(int i=0;i<n;i++){
        cnt+=v[i]-a;
    }
    cout<<cnt<<endl;
    
}

int main(){
    fast;
    int t;cin>>t;while(t--){
       solve(); 
    }
    
    return 0;
}