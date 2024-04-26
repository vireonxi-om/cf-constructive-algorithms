// Problem: Li Hua and Pattern
// URL: https://codeforces.com/problemset/problem/1797/B
// Rating: 1100
// Tags: constructive algorithms, greedy
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
typedef long double LD;

const int N = 1100;
const int M = 51000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int n, k;
int a[N][N];

void solve() {
	cin >> n >> k;
	repn(i, 1, n) {
		repn(j, 1, n) cin >> a[i][j];
	}
	int cnt = 0;
	repn(i, 1, (n + 1) / 2) {
		int ed = n;
		if (n + 1 == 2 * i) ed = n / 2;
		repn(j, 1, ed) {
			if (a[i][j] != a[n + 1 - i][n + 1 - j]) cnt ++;
		}
	}
	bool can = true;
	if (k < cnt) can = false;
	else {
		if (((k - cnt) % 2 == 1) && (n % 2 == 0)) can = false;
	}
	if (can) cout << "YES\n";
	else cout << "NO\n";
} 

int main() {
	IO; 
	int t;
	cin >> t;
	repn(i, 1, t) solve(); 
	return 0;
}



