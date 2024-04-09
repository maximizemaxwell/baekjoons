#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int> q;
	string command;
	int N;
	cin >> N;
	int num;

	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command == "push") {
			cin >> num;
			q.push(num);
		}

		if (command == "pop") {
			if (q.empty()) cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}

		if (command == "size") {
			cout << q.size() << '\n';
		}

		if (command == "empty") {
			if (q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}

		if (command == "front") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}

		if (command == "back") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
	}
}