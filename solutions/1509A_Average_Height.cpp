// Problem: Average Height
// URL: https://codeforces.com/problemset/problem/1509/A
// Rating: 800
// Tags: constructive algorithms
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, num;
vector<int> t1, t2;

void solve(){
    scanf("%d", &n);
    t1.clear(); t2.clear();
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if(num%2) t1.push_back(num);
        else t2.push_back(num);
    }
    for(auto x:t1) printf("%d ",x);
    for(auto x:t2) printf("%d ",x);
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


// maintenance note (3): add edge-case comment to this file — 2026-08-26
// maintenance note (10): add edge-case comment to this file — 2026-09-13
