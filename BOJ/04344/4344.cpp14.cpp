#include <iostream>using namespace std;int main() {	int c, n, sum, count;	float avrg;	cin >> c;	float result[1000];	for (int i = 0; i < c; i++) {		cin >> n;		int* score = new int[n];		sum = 0;		for (int j = 0; j < n; j++) {			cin >> score[j];			sum += score[j];		}		avrg = ((float)sum / (float)n);		count = 0;		for (int k = 0; k < n; k++) {			if (score[k] > avrg) count++;			else continue;		}		result[i] = 100 * ((float)count / (float)n);	}	cout << fixed;	cout.precision(3);	for (int i = 0; i < c; i++) cout << result[i] << "%\n";	return 0;}