#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, num;
	int first = 1;
	stack <int> student;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num == first) first++;
		else student.push(num);

		while (!student.empty() && student.top() == first) {
			student.pop();
			first++;
		}
	}
	if (student.empty()) cout << "Nice";
	else cout << "Sad";
	
}