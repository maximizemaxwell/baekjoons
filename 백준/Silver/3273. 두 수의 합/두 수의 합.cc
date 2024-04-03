#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int* arr1 = new int[n];
	int* arr2 = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}

	int x;
	cin >> x;
	for (int i = 0; i < n; i++) {
		arr2[i] = x - arr1[i];
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n);

	int cnt = 0;
	int i = 0;
	int j = 0;

	while (i < n && j < n) {
		if (arr1[i] == arr2[j]) {
			cnt++;
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j]) i++;
		else j++;
	}

	cout << cnt/2;
	delete[] arr1;
	delete[] arr2;
	



}