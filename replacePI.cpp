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
void replacePi(char a[], int i) {
	if (a[i] == '\0' or a[i + 1] == '\0') {
		return;
	}
	if (a[i] == 'p' and a[i + 1] == 'i') {

		int j = i + 2;
		while (a[j] != '\0') {
			j++;
		}
		while (j >= i + 2) {
			a[j + 2] = a[j];
			j--;
		}
		a[i] = '3';
		a[i + 1] = '.';
		a[i + 2] = '1';
		a[i + 3] = '4';
		replacePi(a, i + 4);
	} else {
		replacePi(a, i + 1);
	}
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
		char str[1000];
		cin >> str;
		replacePi(str, 0);
		cout << str << "\n";
	}
}

