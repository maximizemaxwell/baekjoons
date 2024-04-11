#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s1, s2;
	int result = 0;
	int arr[26] = {};
	cin >> s1 >> s2;

	for (int i = 0; i < s1.length(); i++) arr[s1[i] - 'a']++;
	for (int i = 0; i < s2.length(); i++) arr[s2[i] - 'a']--;
	for (int i = 0; i < 26; i++) result += abs(arr[i]);
	cout << result;

	return 0;
}