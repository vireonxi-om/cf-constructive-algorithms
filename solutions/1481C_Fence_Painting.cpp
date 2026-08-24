// Problem: Fence Painting
// URL: https://codeforces.com/problemset/problem/1481/C
// Rating: 1600
// Tags: brute force, constructive algorithms, greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, m, a[110000], c[110000], pos[110000], ans[110000];
vector<int> col[110000];

void solve(){
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
        pos[i]=0;
        col[i].clear();
    }
    for(int i=1; i<=n; i++) scanf("%d", &a[i]);
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if(num!=a[i]){
            col[num].push_back(i);
        }
        pos[num]=i;
    }
    for(int i=1; i<=m; i++) scanf("%d", &c[i]);
    bool can=true;
    int last=0;
    for(int i=m; i>=1; i--){
        if(pos[c[i]]!=0){
            if(!col[c[i]].empty()){
                auto it=col[c[i]].end(); it--;
                ans[i]=(*it);
                col[c[i]].erase(it);
            }
            else ans[i]=pos[c[i]];
        }
        if(last==0 && pos[c[i]]) last=i;
        if(pos[c[i]]==0){
            if(last==0) can=false;
            else ans[i]=ans[last];
        }
    }
    for(int i=1; i<=n; i++){
        if(!col[i].empty()) can=false;
    }
    if(can){
        printf("YES\n");
        for(int i=1; i<=m; i++) printf("%d ", ans[i]); printf("\n");
    }
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}// maintenance note (2): add edge-case comment to this file — 2026-08-24
