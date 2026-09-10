// Problem: Putting Plates
// URL: https://codeforces.com/problemset/problem/1530/B
// Rating: 800
// Tags: constructive algorithms, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
char s[25][25];

void solve(){
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) s[i][j]='0';
    }
    for(int j=1; j<=m-2; j+=2){
        s[1][j]='1'; s[n][j]='1';
    }
    for(int i=1; i<=n-2; i+=2){
        s[i][1]='1'; s[i][m]='1';
    }
    s[1][1]='1'; s[1][m]='1'; s[n][1]='1'; s[n][m]='1';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) printf("%c", s[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (9): add edge-case comment to this file — 2026-09-10
