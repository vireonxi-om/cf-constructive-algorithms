// Problem: Another Array Problem
// URL: https://codeforces.com/problemset/problem/1763/C
// Rating: 2000
// Tags: brute force, constructive algorithms, greedy
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

const int N = 210000;
const int M = 11000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int n;
LL a[N], b[5];

void solve() {
	cin >> n;
	LL ans = 0;
	repn(i, 1, n) {
		cin >> a[i];
		ans += a[i];
	} 
	if (n == 3) {
		ans = max(ans, a[1] * n);
		ans = max(ans, a[3] * n);
		ans = max(ans, (a[2] - a[1]) * n);
		ans = max(ans, (a[2] - a[3]) * n);
	}
	if (n > 3) {
		repn(i, 1, n) ans = max(a[i] * n, ans);
	}
	/*
	if (n == 3) {
		repn(i, 1, n) b[i] = a[i];
		b[1] = max(b[2] - b[1], b[1] - b[2]);
		b[2] = b[1];
		ans = max(ans, b[1] + b[2] + b[3]);
		b[3] = max(b[2] - b[3], b[3] - b[2]);
		b[2] = b[3];
		ans = max(ans, b[1] + b[2] + b[3]);
		repn(i, 1, n) b[i] = a[i];
		b[3] = max(b[2] - b[3], b[3] - b[2]);
		b[2] = b[3];
		ans = max(ans, b[1] + b[2] + b[3]);
		b[1] = max(b[2] - b[1], b[1] - b[2]);
		b[2] = b[1];
		ans = max(ans, b[1] + b[2] + b[3]);
	}
	*/
	if (n == 2) {
		ans = max(ans, max(a[1] - a[2], a[2] - a[1]) * 2);
	}
	cout << ans << "\n";
}

int main() {
    IO;
    int t;
    cin >> t;
    repn(i, 1, t) solve();
    return 0;
}




