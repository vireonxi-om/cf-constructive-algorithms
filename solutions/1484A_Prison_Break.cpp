// Problem: Prison Break
// URL: https://codeforces.com/problemset/problem/1484/A
// Rating: 800
// Tags: constructive algorithms
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int a, b;

void solve(){
    scanf("%d%d", &a, &b);
    printf("%d\n", a*b);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
