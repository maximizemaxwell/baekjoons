#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int T;
	cin >> T;
	cin.ignore();
	stack <char> mystack;
	string sentence;

	for (int i = 0; i < T; i++) {
		getline(cin, sentence);
		sentence += ' ';

		for (int i = 0; i < sentence.size(); i++) {
			if (sentence[i] == ' ') {
				while (!mystack.empty()) {
					cout << mystack.top();
					mystack.pop();
				}
				cout << ' ';
				
			}
			else mystack.push(sentence[i]);
		}
		cout << '\n';
	}

}