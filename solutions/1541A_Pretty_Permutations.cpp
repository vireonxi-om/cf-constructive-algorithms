// Problem: Pretty Permutations
// URL: https://codeforces.com/problemset/problem/1541/A
// Rating: 800
// Tags: constructive algorithms, greedy, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

void solve(){
    scanf("%d", &n);
    if(n%2){
        printf("3 1 2 ");
        for(int i=4; i<n; i+=2){
            printf("%d %d ", i+1, i);
        }
        printf("\n");
    }
    else{
        for(int i=1; i<n; i+=2){
            printf("%d %d ", i+1, i);
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