// Problem: Omkar and Bad Story
// URL: https://codeforces.com/problemset/problem/1536/A
// Rating: 800
// Tags: brute force, constructive algorithms
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<int> ans;
set<int> s;

void solve(){
    ans.clear(); s.clear();
    scanf("%d", &n);
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        ans.push_back(num);
        s.insert(num);
    }
    int now=0;
    bool can=true;
    while(now<ans.size()){
        num=ans[now];
        for(auto x:s){
            if(x==num) continue;
            if(s.find(abs(x-num))==s.end()){
                if(ans.size()==300){
                    can=false; break;
                }
                else{
                    ans.push_back(abs(x-num));
                    s.insert(abs(x-num));
                }
            }
        }
        now++;
    }
    if(can) {
        printf("YES\n");
        printf("%d\n", ans.size());
        for (auto x:ans) printf("%d ", x);
        printf("\n");
    }
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


