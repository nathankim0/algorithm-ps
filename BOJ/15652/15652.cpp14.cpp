#include <iostream>using namespace std;int n, m;int arr[8];int arr2[8];void func(int start, int depth) {	if (depth == m) {		for (int i = 0; i < m; i++) {			cout << arr2[i] << " ";		}		cout << '\n';		return;	}	for (int i = start; i < n; i++) {		arr2[depth] = arr[i];		func(i, depth + 1);	}}int main() {	cin >> n >> m;	for (int i = 0; i < n; i++) {		arr[i] = i+1;	}	func(0, 0);}