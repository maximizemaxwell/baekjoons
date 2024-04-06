#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	stack <char> left;
	stack <char> right;

	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		left.push(s[i]);
	}
	char command;

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> command;

		if (command == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (command == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (command == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (command == 'P') {
			char ch;
			cin >> ch;
			left.push(ch);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}


}