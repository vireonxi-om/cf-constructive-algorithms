// Problem: Not Adjacent Matrix
// URL: https://codeforces.com/problemset/problem/1520/C
// Rating: 1000
// Tags: constructive algorithms
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[110][110];

void solve(){
    scanf("%d", &n);
    if(n==1){ printf("1\n"); return;}
    if(n==2){ printf("-1\n"); return;}
    int cnt=1;
    for(int t=n-1; t>=1-n; t-=2){
        for(int i=max(1, 1+t); i<=min(n+t, n); i++){
            int j=i-t;
            a[i][j]=cnt++;
        }
    }
    for(int t=n-2; t>=2-n; t-=2){
        for(int i=max(1, 1+t); i<=min(n+t, n); i++){
            int j=i-t;
            a[i][j]=cnt++;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


