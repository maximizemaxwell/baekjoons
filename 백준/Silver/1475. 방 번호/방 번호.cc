#include <iostream>
#include <string>
using namespace std;
int main(void) {
	int N;
	cin >> N;
	int freq[10] = {};
	string sN = to_string(N);
	for (char s : sN) {
		freq[s - '0']++;
	}
	int six_nine = (freq[6] + freq[9] + 1) / 2;
	freq[6] = six_nine;
	freq[9] = six_nine;

	int max = freq[0];
	for (int i = 0; i < 10; i++) {
		if (max < freq[i]) max = freq[i];
	}
	cout << max;

}