#include <iostream>#include <vector>using namespace std;int arr[30];int main() {	int a;	vector<int> vec;	for (int i = 0; i < 28; i++) {		cin >> a;		arr[a]++;	}	for (int i = 1; i <= 30; i++) {		if (!arr[i]) vec.push_back(i);	}	if (vec[0] > vec[1]) swap(vec[0], vec[1]);	cout << vec[0] << '\n' << vec[1];}