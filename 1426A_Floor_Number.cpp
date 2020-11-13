
/**
 *    author:  hassanreyad
 *    created: 13.11.2020       
**/

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
#define ends return 0;
#define endl "\n"
#define test int t;cin>>t;while(t--)

void solve()
{
    int n,x;
    cin>>n>>x;
    int pass=(n-2)/x;


    if(n==1) cout<<"1"<<endl;
    else
    {


        if((n-2)%x==0)
        {
            cout<<pass+1<<endl;
        }
        else
        {
            cout<<pass+2<<endl;
        }

        
    }
    
}



int main()
{
    fast;
    test {solve();}
    ends;
}