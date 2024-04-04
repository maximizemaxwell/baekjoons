#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		for (int k = 0; k < N-i-1; k++) {
			cout << "  ";
		}
		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		cout << '\n';
	}

	for (int i = 0; i < N - 1; i++) {
		for (int k = 0; k < N - i - 1; k++) {
			cout << "*";
		}
		for (int k = 0; k <= i; k++) {
			cout << "  ";
		}
		for (int k = 0; k < N - i - 1; k++) {
			cout << "*";
		}
		cout << '\n';
	}
}
