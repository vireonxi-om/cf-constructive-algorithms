// Problem: Anti-knapsack
// URL: https://codeforces.com/problemset/problem/1493/A
// Rating: 800
// Tags: constructive algorithms, greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, k;

void solve(){
    scanf("%d%d", &n, &k);
    vector<int> ans;
    for(int i=n; i>k; i--){
        ans.push_back(i);
    }
    for(int i=k-1; i>=(k+1)/2; i--) ans.push_back(i);
    printf("%d\n", ans.size());
    for(auto x: ans) printf("%d ", x);
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (12): small formatting cleanup on this file — 2026-09-18
