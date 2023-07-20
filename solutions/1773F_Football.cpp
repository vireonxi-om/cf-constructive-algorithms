// Problem: Football
// URL: https://codeforces.com/problemset/problem/1773/F
// Rating: 800
// Tags: constructive algorithms
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,n) for (int i = a; i < n; i++)
#define repn(i,a,n) for (int i = a; i <= n; i++)
#define per(i,a,n) for (int i = n - 1; i >= a; i--)
#define pern(i,a,n) for (int i = n; i >= a; i--)

typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;

const int N = 1000100;
const int M = 5100000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;




int main() {
    IO;
    int n, a, b;
    cin >> n >> a >> b;
    if (n == 1) {
        if (a == b) cout << "1\n";
        else cout << "0\n";
        cout << a << ":" << b << "\n";
    }
    else {
        int a1 = min(n - 2, a - 1);
        a1 = max(a1, 0);
        int a2 = a - a1;
        int l = n - a1;
        if (a2) l --;
        int b1 = min(l - 1, b - 1);
        b1 = max(b1, 0);
        int b2 = b - b1;
        l -= b1;
        if (b2) l --;
        if (b2 == 0 && a2 > 1) {
            a2 --;
            a1 ++;
            l --;
        }
        cout << l << "\n";
        if (a1) repn(i, 1, a1) cout << "1:0\n";
        if (a2) cout << a2 << ":0\n";
        if (b1) repn(i, 1, b1) cout << "0:1\n";
        if (b2) cout << "0:" << b2 <<"\n";

        repn(i, 1, l) cout << "0:0\n";
    }
    return 0;
}



