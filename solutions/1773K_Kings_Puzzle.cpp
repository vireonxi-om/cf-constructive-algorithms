// Problem: King's Puzzle
// URL: https://codeforces.com/problemset/problem/1773/K
// Rating: 1900
// Tags: constructive algorithms
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,n) for (int i = a; i < n; i++)
#define repn(i,a,n) for (int i = a; i <= n; i++)
#define per(i,a,n) for (int i = (n) - 1; i >= a; i--)
#define pern(i,a,n) for (int i = n; i >= a; i--)

typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<int, LL> PIL;
typedef pair<double, double> PDD;
typedef pair<ull, ull> PUU;
typedef pair<LL, LL> PLL;

const int N = 110000;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = (int)1e9;
const LL INF = 1e18;
const double eps = 1e-9;

int n, k;
vector<PII> ans;
int main() {
	IO;
	cin >> n >> k;
	if (n == 1 && k == 1) {
		cout << "YES\n";
		cout << "0\n";
		return 0;
	}
	if (n == 2 && k == 1) {
		cout << "YES\n";
		cout << "1\n";
		cout << "1 2\n";
		return 0;
	}
	if (n == k) {
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
	if (k == 1) {
		rep(i, 1, n) ans.pb(mp(i, i + 1));
		ans.pb(mp(n, 1));
	}
	else {
		k -= 2;
		rep(i, 1, n) ans.pb(mp(i, n));
		int l = 2, r = n - 1;
		while (k) {
			if (k == 1) {
				ans.pb(mp(l, l + 1));
				k--;
			}
			else {
				rep(i, l, r) ans.pb(mp(i, r));
				k -= 2;
				l++, r--;
			}
		}
	}
	cout << ans.size() << "\n";
	for (auto p: ans) {
		cout << p.fi << " " << p.se << "\n";
	}
	return 0;
}