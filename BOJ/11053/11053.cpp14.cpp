#include <iostream>#include <vector>using namespace std;int main() {	int a;	cin >> a;	int arr[1001];	for (int i = 1; i <= a; i++) {		cin >> arr[i];	}	int dp[1001];	int length = 0;	for (int i = 1; i <= a; i++) {		dp[i] = 1;		for (int j = 1; j < i; j++) {			if (arr[j] < arr[i] && dp[i] < dp[j]+1) {				dp[i]++;			}		}		if (length < dp[i])length = dp[i];	}	cout << length;}