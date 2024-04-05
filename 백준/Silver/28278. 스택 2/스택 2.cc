#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(NULL);
	int N;
	cin >> N;
	int command;
	stack <int> mystack;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == 1) {
			int X;
			cin >> X;
			mystack.push(X);
		}
		else if (command == 2) {
			if (!mystack.empty()) {
				cout << mystack.top() << '\n';
				mystack.pop();
			}
			else cout << -1 << '\n';
		}
		else if (command == 3) {
			cout << mystack.size() << '\n';
		}
		else if (command == 4) {
			if (mystack.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (command == 5) {
			if (!mystack.empty()) cout << mystack.top() << '\n';
			else cout << -1 << '\n';
		}
	}
}