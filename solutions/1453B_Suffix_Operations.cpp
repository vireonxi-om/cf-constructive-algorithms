// Problem: Suffix Operations
// URL: https://codeforces.com/problemset/problem/1453/B
// Rating: 1400
// Tags: constructive algorithms, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[210000], r;
ll sum;

void solve(){
    scanf("%d", &n);
    r=0; sum=0;
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        if(i>1) sum+=abs(a[i]-a[i-1]);
        if(i>2){
            if(a[i-1]>=a[i-2] && a[i-1]>=a[i])
                r=max(r, 2*(a[i-1]-max(a[i], a[i-2])));
            else if(a[i-1]<=a[i-2] && a[i-1]<=a[i])
                r=max(r, 2*(min(a[i], a[i-2])-a[i-1]));
        }
    }
    r=max(r, abs(a[1]-a[2]));
    r=max(r, abs(a[n]-a[n-1]));
    sum-=(ll)r;
    printf("%lld\n", sum);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) solve();
    return 0;
}
