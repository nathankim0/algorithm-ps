#include <iostream>using namespace std;int main() {	int max=0,maxi;	int sum[10] = { 0, };	int a[5][4];	for (int i = 0; i < 5; i++) {		for (int j = 0; j < 4; j++) {			cin >> a[i][j];			sum[i] += a[i][j];		}	}	for (int i = 0; i < 5; i++) {		if (max < sum[i]) { 			max = sum[i]; 			maxi = i;		}	}	cout << maxi+1 << " " << max;}