#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	queue <int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	for (int i = 0; i < N; i++) {
		if (q.size() == 1) break;
		q.pop();
		int next = q.front();
		q.pop();
		q.push(next);
	}
	cout << q.front();
}