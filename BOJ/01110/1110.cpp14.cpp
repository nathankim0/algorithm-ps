#include <iostream>using namespace std;int main() {	int n, a, b, c, d, original, count = 0;	cin >> n;	original = n;	while(1) {		a = (int)(n / 10);		b = (int)(n % 10);		c = a + b;		d = (10 * b) + (int)(c % 10);		count++;		if (d == original) break;		else n = d;	}	cout << count << '\n';		return 0;}