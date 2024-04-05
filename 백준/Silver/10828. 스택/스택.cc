#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Stack {
	int data[10000];
	int size;
	Stack() {
		size = 0;
	}

	void push(int num) {
		data[size] = num;
		size++;
	}

	bool empty() {
		return size == 0;
	}

	int pop() {
		if (empty()) return -1;
		else {
			int result = data[size - 1];
			size--;
			return result;
		}
	}

	int top() {
		if (empty()) return -1;
		else {
			return data[size - 1];
		}
	}

	int getsize() {
		return size;
	}

};

int main(void) {
	int N;
	int x;
	int num;
	string command;
	Stack mystack;
	cin >> N;
	

	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			mystack.push(num);
		}
		else if (command == "pop") {
			cout << mystack.pop() << '\n';
		}
		else if (command == "size") {
			cout << mystack.getsize() << '\n';
		}
		else if (command == "empty") {
			cout << mystack.empty() << "\n";
		}
		else if (command == "top") {
			cout << mystack.top() << "\n";
		}
		
		
	}

}
