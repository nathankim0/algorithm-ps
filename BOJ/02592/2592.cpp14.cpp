#include <iostream>#include <algorithm>using namespace std;int main() {	int a[10];	int count[1001] = { 0, };	int sum = 0;	int max = 0;	for (int i = 0; i < 10; i++) {		cin >> a[i];		sum += a[i];	}	for (int i = 0; i < 10; i++) {		count[a[i]]++;	}	int maxcnt = count[a[0]];	for (int i = 0; i < 1000; i++) {		if (maxcnt <= count[i]) {			maxcnt = count[i];			max = i;		}	}	printf("%d\n%d", sum / 10, max);}