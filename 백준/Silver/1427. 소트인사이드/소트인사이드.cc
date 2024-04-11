#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	getline(cin, str);
	
	sort(str.begin(), str.end());

	for (int i = str.size() - 1; i >= 0; i--) {
		cout << str[i];
	}

}