#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define INF INT_MAX
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define MAXN 1000000
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<=b;i++)
#define sz(x) (ll)x.size()

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;

		vi arr(n);
		for (auto &i : arr)
			cin >> i;

		int cnt1 = 0, cnt2 = 0;
		for (auto i : arr)
		{
			if (i % 2 == 0)
				cnt1++;
			else
				cnt2++;
		}

		if (cnt1 == 0 || cnt2 == 0)
			cout <<0<<endl;
		else if (cnt1 == cnt2)
		{
			if (cnt1 % 2 == 0)
				cout << cnt1 / 2 <<endl;
			else
				cout << (cnt1 + cnt2) / 2 <<endl;
		}
		else if (cnt1 < cnt2)
		{
			if (cnt2 % 2 == 0 and cnt2 / 2 < cnt1)
				cout << cnt2 / 2 <<endl;
			else
				cout << cnt1 <<endl;

		}
		else if (cnt2 < cnt1)
		{
			if (cnt2 % 2 == 0)
				cout << cnt2 / 2 <<endl;
			else
				cout << cnt1 <<endl;
		}


	}


	return 0;
}