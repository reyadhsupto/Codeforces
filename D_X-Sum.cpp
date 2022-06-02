#include<bits/stdc++.h>
using namespace std;
#define io ios::sync_with_stdio(false);cin.tie(nullptr);

void solve(){
    int n,m;
    cin>>n>>m;
    int row=n,col=m;
    int arr[n][m];

    int maxans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            int row=i,col=j;
            int ans=0;
    
    while(row<n and row>=0 and col<m and col>=0){//right down diagonal
        ans+=arr[row][col];
        row++;col++;
    }
    row=i;col=j;
    ans-=arr[row][col];
    while(row>=0 and row<n and col<m and col>=0){//leftup diagonal
        ans+=arr[row][col];
        row--;col--;
    }

    row=i;col=j;
    ans-=arr[row][col];
    while(row>=0 and row<n and col>=0 and  col<m){//right tup diagonal
        ans+=arr[row][col];
        row--;col++;
    }

    row=i;col=j;
    ans-=arr[row][col];
    while(row<n and row >=0 and col<m and col>=0){//left down diagonal
        ans+=arr[row][col];
        row++;col--;
    }
    maxans = max(ans,maxans);
        }
    }
    
    cout<<maxans<<endl;
    
}

int main(){
    io;
    int t;
    cin>>t;
    while(t--){
       solve(); 
    }
    return 0;
}