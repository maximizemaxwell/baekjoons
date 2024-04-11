#include <iostream>

using namespace std;
int memo[1000001];
int divide(int n) {
	
	if (n == 1) return 0;
	if (memo[n] > 1) return memo[n];
	
	memo[n] = divide(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = divide(n / 2) + 1;
		if (temp < memo[n]) memo[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = divide(n / 3) + 1;
		if (temp < memo[n]) memo[n] = temp;
	}
	return memo[n];

}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int res = divide(N);
	cout << res;

}