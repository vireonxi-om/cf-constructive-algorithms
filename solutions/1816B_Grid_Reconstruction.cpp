// Problem: Grid Reconstruction
// URL: https://codeforces.com/problemset/problem/1816/B
// Rating: 1000
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
 
const int N = 210000;
const int M = 1100000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;
 
int n;
 
void solve() {
	cin >> n;
	int st1 = 2 * n, st2 = n;
	repn(i, 1, n) {
		if (i % 2) {
			cout << st1 << " "; st1 -= 2;
		} 
		else {
			cout << st2 << " "; st2 -= 2;
		}
	}
	cout << "\n";
	st1 = n - 1; st2 = 2 * n - 3;
	rep(i, 1, n) {
		if (i % 2) {
			cout << st1 << " "; st1 -= 2;
		} 
		else {
			cout << st2 << " "; st2 -= 2;
		}
	}
	cout << 2 * n - 1 << "\n";
}
 
int main() { 
	IO;
	int t;
	cin >> t;
	repn(i, 1, t) solve(); 
	return 0;
}
 
