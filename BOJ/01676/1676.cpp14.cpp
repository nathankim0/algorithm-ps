#include <iostream>using namespace std;int main() {	/*int n;	int mul = 1;	cin >> n;	for (int i = n; i > 0; i--) {		mul *= i;	}	int cnt = 0;	while (1) {		if (mul%10 == 0) {			cnt++;		}		else break;		mul /= 10;	}	cout << cnt;*/	int n;	cin >> n;	int cnt=0;	for (int i = 5; i <= n; i *= 5) {		cnt += n / i;	}	cout << cnt;}