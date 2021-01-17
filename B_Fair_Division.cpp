#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(nullptr);
#define test int t;cin>>t;while(t--)


void solve2() {
    int n;
    cin>>n;
    int one=0,two=0,sum;

    while(n--){
        int a;
        cin>>a;
        (a==1)? one++ : two++;
    }
    bool ok  = 1;

    two %= 2;
    if (two) {
        if (one >= 2) one -= 2;
        else ok = 0;
    }
    one %= 2;

    if (ok && one == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    fast;
#ifndef ONLINE_JUDGE
    // freopen("in.txt", "r", stdin);
#endif
test{
    solve2();
}
    return 0;
}