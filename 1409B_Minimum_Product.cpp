
/**
 *    author:  hassanreyad
 *    created: 12.11.2020       
**/

#include <bits/stdc++.h>
using namespace std;


#define fast ios::sync_with_stdio(false);cin.tie(0);
#define ends return 0;
#define endl "\n";
#define ll long long int
#define test int t;cin>>t;while(t--)



void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    ll tempa=a, tempb=b;
    ll can_a=(a-x) , can_b=(b-y);

    tempa=tempa-min(can_a,n);
    ll remainder= n- min(can_a,n);
    tempb-=min(can_b,remainder);
    ll answer1= tempa*tempb;

    b-=min(can_b,n);
    n=n-min(can_b,n);
    a=a-min(can_a,n);
    ll answer2=a*b;

    ll ans=min(answer1,answer2);
    cout<<ans<<endl;

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