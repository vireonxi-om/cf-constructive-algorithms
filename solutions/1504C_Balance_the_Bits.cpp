// Problem: Balance the Bits
// URL: https://codeforces.com/problemset/problem/1504/C
// Rating: 1600
// Tags: brute force, constructive algorithms, greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;
char a[210000], ansa[210000], ansb[210000];

void solve(){
    scanf("%d%s", &n, a+1);
    int cnt=0;
    bool can=true;
    if(a[1]=='0'||a[n]=='0') can=false;
    for(int i=1; i<=n; i++){
        if(a[i]=='0') cnt++;
    }
    if(cnt%2) can=false;
    if(can){
        int t=1;
        for(int i=1; i<=n; i++){
            if(a[i]=='0'){
                if(t%2){ ansa[i]='('; ansb[i]=')';}
                else { ansa[i]=')'; ansb[i]='(';}
                t++;
            }
        }
        int tot=n/2-cnt/2, now=1;
        for(int i=1; i<=n; i++){
            if(a[i]=='1'){
                if(now<=tot) { ansa[i]='('; ansb[i]='(';}
                else { ansa[i]=')'; ansb[i]=')';}
                now++;
            }
        }
        ansa[n+1]='\0';
        ansb[n+1]='\0';
        printf("YES\n");
        printf("%s\n%s\n", ansa+1, ansb+1);
    }
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (4): minor readability pass on this file — 2026-08-29
