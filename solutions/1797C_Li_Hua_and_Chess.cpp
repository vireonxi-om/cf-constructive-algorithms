// Problem: Li Hua and Chess
// URL: https://codeforces.com/problemset/problem/1797/C
// Rating: 1600
// Tags: constructive algorithms, greedy, interactive
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

int n, m;

void solve() {
	cin >> n >> m;
	int n1, n2, n3;
	cout << "? 1 1" << endl;
	fflush(stdout);
	cin >> n1;
	n2 = n1; n3 = n1;
	if (n1 + 1 <= m) {
		cout << "? 1 " << n1 + 1 << endl;
		fflush(stdout);
		cin >> n2;
	}
	if (n1 + 1 <= n) {
		cout << "? " << n1 + 1 << " 1" << endl;
		fflush(stdout);
		cin >> n3;
	}
	cout << "! ";
	if (n2 < n1) cout << n2 + 1 << " " << n1 + 1 << endl;
	else cout << n1 + 1 << " " << n3 + 1 << endl;
	fflush(stdout);
} 

int main() { 
	int t;
	cin >> t;
	repn(i, 1, t) solve(); 
	return 0;
}



