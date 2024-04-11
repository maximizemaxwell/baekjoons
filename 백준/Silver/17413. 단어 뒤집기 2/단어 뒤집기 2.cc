#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	stack <char> stk;
	getline(cin, S);
	S = S + ' ';
	bool isintag = false;

	for (char c : S) {
		if (c == '<') {
			while (!stk.empty()) {
				cout << stk.top();
				stk.pop();
			}
			isintag = true;
			cout << c;
		}
		else if (c == '>') {
			isintag = false;
			cout << c;
		}
		else if (isintag) {
			cout << c;
		}
		else {
			if (c == ' ') {
				while (!stk.empty()) {
					cout << stk.top();
					stk.pop();
				}
				cout << c;
			}
			else stk.push(c);
		}
	}
}