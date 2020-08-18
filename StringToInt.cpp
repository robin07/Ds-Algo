//evolvedghost

#include<bits/stdc++.h>
using namespace std;

#define fi              first
#define se              second
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define pai             pair<ll,ll>
#define vi              vector<ll>
#define mpi             map<ll,ll>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inp(tc)         int tc; cin>>tc; while(tc--)
#define fast_io         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

/*
	bool comparePairs(const pair<ll, ll> &a, const pair<ll, ll> &b) {
	return (a.first > b.first);
}

bool compare(int a, int b) {
	return a <= b ;
}
ll gcd(ll a, ll b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return ((a * b) / gcd(a, b));
}*/
int stringToInt(string str, int n) {
	if (n == 0) {
		return 0;
	}
	int digit = str[n - 1] - '0';
	int small_ans = stringToInt(str, n - 1);

	return small_ans * 10 + digit;
}

int main() {
#ifndef ONLINE_JUDGE
	//for reading input from input.txt
	freopen("input3.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output3.txt", "w", stdout);
#endif

	fast_io;
	inp(tc) {
		string num;
		cin >> num;
		int n = num.size();
		int x = stringToInt(num, n);
		cout << x << " " << x + 1 << "\n";
	}
}
