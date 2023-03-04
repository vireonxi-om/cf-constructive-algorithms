// Problem: String Generation
// URL: https://codeforces.com/problemset/problem/1461/A
// Rating: 800
// Tags: constructive algorithms, greedy
// Language: C++14 (GCC 6-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k;

void solve(){
    scanf("%d%d", &n, &k);
    for(int i=1; i<=k; i++) printf("a");
    int j=(n-k)/3;
    for(int i=j; i>0; i--) printf("bca");
    int t=n-j*3-k;
    if(t==2) printf("bc");
    else if(t==1) printf("b");
    printf("\n");

}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}
