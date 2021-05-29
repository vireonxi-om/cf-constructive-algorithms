// Problem: Three Bags
// URL: https://codeforces.com/problemset/problem/1467/C
// Rating: 1900
// Tags: constructive algorithms, greedy
// Language: C++17 (GCC 7-32)


#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int x, y, z, a[310000], b[310000], c[310000];
ll suma, sumb, sumc, m1, m2, m3, del;

int main(){
    scanf("%d%d%d", &x, &y, &z);
    m1=2e9; m2=2e9; m3=2e9;
    for(int i=1; i<=x; i++){
        scanf("%d", &a[i]);
        suma+=a[i];
        m1=min(m1, (ll)a[i]);
    }
    for(int i=1; i<=y; i++){
        scanf("%d", &b[i]);
        sumb+=b[i];
        m2=min(m2, (ll)b[i]);
    }
    for(int i=1; i<=z; i++){
        scanf("%d", &c[i]);
        sumc+=c[i];
        m3=min(m3, (ll)c[i]);
    }
    del=min(m1+m2, m2+m3); del=min(del, m1+m3);
    del=min(del, suma);
    del=min(del, sumb);
    del=min(del, sumc);
    printf("%lld\n", suma+sumb+sumc-2*del);
}
