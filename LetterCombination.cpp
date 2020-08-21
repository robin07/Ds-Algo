Ques: Letter Combination of Keypad

Recursion + backtracking

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

vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void dfs(string &digits, int idx, string &s, vector<string> &res) {
	if (digits.size() == idx) {
		res.push_back(s);
		return;
	}
	for (auto x : mapping[digits[idx] - '0']) {
		s += x;
		dfs(digits, idx + 1, s, res);
		s.pop_back();
	}
}

vector<string> letterCombination(string digits) {
	vector<string> res;
	if (digits.size() == 0) {
		return res;
	}
	string s;
	dfs(digits, 0, s, res);
	return res;
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
		string digits;
		cin >> digits;
		vector<string> v = letterCombination(digits);
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v[i].size(); j++) {
				cout << v[i][j];
			} cout << "\n";
		}
	}
}

