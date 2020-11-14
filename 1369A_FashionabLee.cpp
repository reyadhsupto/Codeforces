
/**
 *    author:  hassanreyad
 *    created: 14.11.2020       
**/

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
#define ends return 0;
#define i64 int64_t
#define test int t;cin>>t;while(t--)

void solve()
{
    i64 n;
    cin>>n;
    if(n>3){
        cout<<((n%4==0)? "YES":"NO")<<endl;
    }
    else cout<<"NO"<<endl;

}

int main()
{
    fast;
    test{
        solve();
    }
    ends;
}
