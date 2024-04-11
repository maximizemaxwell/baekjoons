#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, K;
	cin >> N >> K;
	int s, y;
	int male[7] = {};
	int female[7] = {};
	for (int i = 0; i < N; i++) {
		cin >> s >> y;
		if (s == 0) female[y]++;
		if (s == 1) male[y]++;
	}
	int res = 0;
	for (int i = 0; i < 7; i++) {
		if (male[i] % K == 0) res += male[i]/K;
		else res += male[i] / K + 1;
		if (female[i] % K == 0) res += female[i] / K;
		else res += female[i] / K + 1;
	}
	cout << res;
}