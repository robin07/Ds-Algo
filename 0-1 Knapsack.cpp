Ques: 0-1 Knapsack using recursion

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



int maxProfit(int weight[], int value[], int capacity, int size) {
	if (size == 0 or capacity == 0) {
		return 0;
	}
	if (capacity < weight[size - 1]) {
		return maxProfit(weight, value, capacity, size - 1);
	}
	else {
		return max(value[size - 1] + maxProfit(weight, value, capacity - weight[size - 1], size - 1), maxProfit(weight, value, capacity, size - 1));
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
		int capacity, size;
		cin >> size >> capacity;
		int weight[size], value[size];
		for (int i = 0; i < size; i++) {
			cin >> weight[i];
		}
		for (int i = 0; i < size; i++) {
			cin >> value[i];
		}
		cout << maxProfit(weight, value, capacity, size) << "\n";
	}
}

