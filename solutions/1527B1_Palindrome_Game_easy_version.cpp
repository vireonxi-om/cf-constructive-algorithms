// Problem: Palindrome Game (easy version)
// URL: https://codeforces.com/problemset/problem/1527/B1
// Rating: 1200
// Tags: constructive algorithms, games
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
char s[1100];

void solve(){
    scanf("%d%s", &n, s+1);
    int cnt=0;
    for(int i=1; i<=n; i++) if(s[i]=='0') cnt++;
    if(cnt%2==0 || cnt==1) printf("BOB\n");
    else printf("ALICE\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (1): add editorial link comment to this file — 2026-08-21
// maintenance note (6): small formatting cleanup on this file — 2026-09-03
