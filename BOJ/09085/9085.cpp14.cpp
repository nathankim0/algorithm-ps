#include <iostream>using namespace std;int main() {	int t;	cin >> t;	while (t--) {		int n,tmp;		int sum = 0;		cin >> n;		for (int i = 0; i < n; i++) {			cin >> tmp;			sum += tmp;		}		cout << sum << endl;	}}