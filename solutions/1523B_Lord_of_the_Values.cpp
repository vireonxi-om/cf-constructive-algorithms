// Problem: Lord of the Values
// URL: https://codeforces.com/problemset/problem/1523/B
// Rating: 1100
// Tags: constructive algorithms
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

void solve(){
    scanf("%d", &n);
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
    }
    printf("%d\n", 3*n);
    for(int i=1; i<=n; i+=2){
        for(int k=1; k<=3; k++){
            printf("%d %d %d\n", 1, i, i+1);
            printf("%d %d %d\n", 2, i, i+1);
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
