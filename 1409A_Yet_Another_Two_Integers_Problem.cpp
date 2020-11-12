
/**
 *    author:  hassanreyad
 *    created: 12.11.2020       
**/

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
#define ends return 0;
#define endl "\n";
#define test int t;cin>>t;while(t--)

void solve()
{
    int64_t a,b;
    cin>>a>>b;
    int dif, j;
    dif = abs(a-b);
    j = (dif/10);

    cout << ((j * 10 == dif) ? to_string(j): to_string(j+1)) << endl;

}
int main()
{
    fast;
    test
    {
        solve();
    }
    ends;
}