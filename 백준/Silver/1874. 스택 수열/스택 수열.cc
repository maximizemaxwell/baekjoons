#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	stack <int> st;
	int m = 0;
	string calc;
	bool found = true;

	for (int i = 0; i < n; i++) {
		if (found == false) {
			cout << "NO";
			return 0;
		}

		int num;
		cin >> num;

		if (num > m) {
			while (num > m) {
				m++;
				st.push(m);
				calc += '+';
			}
			st.pop();
			calc += '-';
		}
		
		else {
			if (st.empty() || st.top() != num) {
				found = false;
			}
			else {
				st.pop();
				calc += '-';
			}
		}
		
	}
	for (int i = 0; i < calc.size(); i++) {
		cout << calc[i];
		cout << '\n';
	}
}