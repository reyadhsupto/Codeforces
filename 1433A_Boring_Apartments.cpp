/**
 *    author:  hassanreyad
 *    created: 10.11.2020       
**/


#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ends return 0;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define test int t;cin>>t;while(t--)


void solve()
{
    int n;
    cin>>n;
    int N=n%10;
    int count=0;
    while(n!=0)
    {
        int r=n%10;
        count++;
        n=n/10;

    }
    int count1=0;
    for(int i=1;i<=N;i++)
    {
        if(i<N)
        {
            count1=count1+10;
        }
        else
        {
            for(int j=1;j<=count;j++)
            {
                count1=count1+j;
            }
        }
    }
    cout<<count1<<endl;
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