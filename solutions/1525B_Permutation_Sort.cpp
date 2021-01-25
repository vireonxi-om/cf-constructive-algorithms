// Problem: Permutation Sort
// URL: https://codeforces.com/problemset/problem/1525/B
// Rating: 900
// Tags: constructive algorithms, greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[60];

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &a[i]);
    bool yes=false;
    int ans;
    for(int i=2; i<n; i++) if(a[i]!=i) yes=true;
    if(a[1]==1 && a[n]==n) {
        if(yes) ans=1;
        else ans=0;
    }
    else if(a[1]==1 || a[n]==n) ans=1;
    else if(a[1]==n && a[n]==1) ans=3;
    else ans=2;
    printf("%d\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}