Ques: Given N friends who want to go to a party on bikes. Each guy can go as single or as couple, calculate the no. of ways in which N friends can go to a party.

Code:-

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


int solve(int n) {
	if (n == 0 or n == 1) {
		return 1;
	}
	int ans = solve(n - 1) + (n - 1) * solve(n - 2);
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
		int n; //total no. of friends
		cin >> n;
		cout << solve(n) << "\n";
	}
}

