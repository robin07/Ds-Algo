Ques: Given a N steps and max jump of size K a person can take. Find no. of ways to reach nth step if he is standing on ground.

Code:

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


int ways(int n, int k) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}
	int ans = 0;
	for (int i = 1; i <= k; i++) {
		ans += ways(n - i, k);
	}
	return ans;
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
		int n, k;
		cin >> n >> k;
		cout << ways(n, k) << "\n";
	}
}

