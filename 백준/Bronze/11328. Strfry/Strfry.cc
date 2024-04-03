#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	string s1, s2;

	for (int i = 0; i < N; i++) {
		cin >> s1 >> s2;
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());

		if (s1 == s2) cout << "Possible\n";
		else cout << "Impossible\n";
	}

}