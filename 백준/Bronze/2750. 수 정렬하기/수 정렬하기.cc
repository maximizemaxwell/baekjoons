#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int num;
	cin >> N;
	vector <int> vec;
	for (int i = 0; i < N; i++) {
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < N; i++) {
		cout << vec[i] << '\n';
	}
}