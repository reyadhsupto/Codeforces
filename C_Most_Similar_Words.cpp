#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);

int difference(string &a,string& b){
    int diff=0;
    for(int i=0;i<a.size();i++){
        diff+=abs((int)a[i]-(int)b[i]);
    }
    return diff;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(string & i:v)cin>>i;



    // for(string i:v)cout<<i<<endl;


    // string a="best",b="cost";
    // cout<<difference(a,b);




    int ans=999999;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans=min(ans,difference(v[i],v[j]));
        }
    }
    cout<<ans<<endl;
    
}

int main(){
    fast;
    int t;cin>>t;while(t--){
       solve(); 
    }
    return 0;
}