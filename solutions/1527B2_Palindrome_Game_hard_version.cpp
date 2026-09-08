// Problem: Palindrome Game (hard version)
// URL: https://codeforces.com/problemset/problem/1527/B2
// Rating: 1900
// Tags: constructive algorithms, games
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
char s[1100];

void solve(){
    scanf("%d%s", &n, s+1);
    int cnt1=0, cnt2=0;
    for(int i=1; i<=n/2; i++){
        if(s[i]=='0' && s[n-i+1]=='0') cnt2++;
        else if(s[i]=='0' || s[n-i+1]=='0') cnt1++;
    }
    if(n%2 && s[n/2+1]=='0'){
        if(cnt1==0 && cnt2==0) printf("BOB\n");
        else if(cnt2==0 && cnt1==1) printf("DRAW\n");
        else printf("ALICE\n");
    }
    else{
        if(cnt2>0 && cnt1==0) printf("BOB\n");
        else printf("ALICE\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (8): add editorial link comment to this file — 2026-09-08
