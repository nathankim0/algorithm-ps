#include <iostream>#include <algorithm>#include <vector>using namespace std;int main() {	vector<pair<int, int>>vec(4);	for (int i = 0; i < 3; i++) {		scanf("%d %d", &vec[i].first,&vec[i].second);	}	int arr[3] = { 0, 0,0};	int arr2[3] = { 0,0,0 };	for (int i = 0; i < 2; i++) {		for (int j = i+1; j < 3; j++) {			if (vec[i].first == vec[j].first) {				arr[i] = 1;				arr[j] = 1;			}			if (vec[i].second == vec[j].second) {				arr2[i] = 1;				arr2[j] = 1;			}		}	}	int r1 = 0;	int r2 = 0;	for (int i = 0; i < 3; i++) {		if (arr[i]==0) r1 = i;		if (arr2[i]==0) r2 = i;	}	cout << vec[r1].first << " "<<vec[r2].second;}