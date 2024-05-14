// Problem: Array and Peaks
// URL: https://codeforces.com/problemset/problem/1513/A
// Rating: 800
// Tags: constructive algorithms, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, k;
int a[110];

void solve(){
    scanf("%d%d", &n, &k);
    int t=(n-1)/2;
    if(k>t) printf("-1\n");
    else{
        for(int i=1; i<=n; i++) a[i]=0;
        for(int i=1; i<=k; i++) a[2*i]=n-i+1;
        int cur=1;
        for(int i=1; i<=n; i++){
            if(a[i]) continue;
            else {
                a[i]=cur;
                cur++;
            }
        }
        for(int i=1; i<=n; i++) printf("%d ", a[i]);
        printf("\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
