#include <iostream>#include <algorithm>using namespace std;int rect[1001][1001];int main() {	int n, m;	scanf("%d %d", &n, &m);	int mx = 0;	for (int i = 0; i < n; i++) {		for (int j = 0; j < m; j++) {			scanf("%1d", &rect[i][j]);			if (rect[i][j]) {				mx = 1;			}		}	}	for (int i = 1; i < n; i++) {		for (int j = 1; j < m; j++) {			if (rect[i][j]>0&&rect[i - 1][j]>0&&rect[i][j - 1]>0&&rect[i - 1][j - 1]>0) {				rect[i][j] = min(rect[i - 1][j],min( rect[i][j - 1], rect[i - 1][j - 1]))+1;				mx = max(mx, rect[i][j]);			}		}	}	cout << mx*mx;}