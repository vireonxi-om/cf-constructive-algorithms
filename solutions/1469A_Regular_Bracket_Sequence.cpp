// Problem: Regular Bracket Sequence
// URL: https://codeforces.com/problemset/problem/1469/A
// Rating: 1000
// Tags: constructive algorithms, greedy
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[110];

void solve(){
    scanf("%s", &s);
    int l=strlen(s);
    bool can=true;
    if(l%2==1) can=false;
    else if(s[0]==')' || s[l-1]=='(') can=false;
    if(can) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}

