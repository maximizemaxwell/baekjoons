#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int k = 0; k < s.size(); k++) {
			if (s[k] == '(') cnt++;
			if (s[k] == ')') cnt--;
			if (cnt < 0) break;
		}
		
		if (cnt == 0) cout << "YES" << '\n';
		else cout << "NO" <<'\n';
	}
}