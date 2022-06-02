#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int count=0,counts=0;
    for(int i=0;i<6;i++){
        if(i>=3){
            counts+=s[i];
        }
        else{
            // cin>>n;
            count+=s[i];
        }
    }
    if(count==counts)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;cin>>t;while(t--){
       solve(); 
    }
    
    return 0;
}