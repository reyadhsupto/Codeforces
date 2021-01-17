#include <bits/stdc++.h>
using namespace std;



void solve(){
   string s,sa = "hello" ;
   cin>>s;
   int count=0;
   int length=s.length();

   for(int i=0,j=0;i<length;i++){

       if(j>=5) break;
       if(s[i]==sa[j]){
           j++;
           count++;
       }
       
   }

   count==5? cout<<"YES" : cout<<"NO";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}