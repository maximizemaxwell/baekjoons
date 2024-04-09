#include <iostream>
using namespace std;

struct Queue {
	int data[10000];
	int start, finish;
	

	Queue() {
		start = 0;
		finish = 0;
	}
	void push(int num) {
		data[finish++] = num;
	}
	bool empty() {
		if (start == finish) return true;
		return false;
	}
	int size() {
		return finish - start;
	}
	int pop() {
		if (empty()) return -1;
		start++;
		return data[start - 1];
	}
	int front() {
		if (empty()) return -1;
		return data[start];
	}
	int back() {
		if (empty()) return -1;
		return data[finish - 1];
	}
};

int main(void) {
	int N;
	cin >> N;
	string command;
	int num;
	Queue queue;
	

	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command == "push") {
			cin >> num;
			queue.push(num);
		}

		if (command == "pop") {
			cout << queue.pop() << '\n';
		}

		if (command == "size") {
			cout << queue.size() << '\n';
		}
		if (command == "empty") {
			if (queue.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		if (command == "front") {
			cout << queue.front() << '\n';
		}
		if (command == "back") {
			cout << queue.back() << '\n';
		}
	}
}