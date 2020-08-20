Ques: Generating all possible subsequences of elements given in array.

code:-

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


void printArr(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	} cout << "\n";
}
void generatingSubsequences(vector<int> arr, int idx, vector<int> outarr) {
	if (idx == arr.size()) {
		int size = outarr.size();
		if (size != 0) {
			printArr(outarr);
		}
	} else {
		//excluding the character at each position
		generatingSubsequences(arr, idx + 1, outarr);

		outarr.pb(arr[idx]);
		// including the character at each position
		generatingSubsequences(arr, idx + 1, outarr);
	}
	return;
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
		int n;
		cin >> n;
		vector<int> arr;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			arr.pb(a);
		}
		vector<int> outarr;
		generatingSubsequences(arr, 0, outarr);
	}
}

