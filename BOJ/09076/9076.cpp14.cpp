#include <iostream>#include <algorithm>#include <vector>using namespace std;bool desc(int a, int b) {	return a > b;}int main() {	int n;	cin >> n;	while (n--) {		vector<int> v;		int t,sum=0;		for (int i = 0; i < 5; i++) {			cin >> t;			v.push_back(t);		}		sort(v.begin(), v.end());		v.pop_back();		sort(v.begin(), v.end(),desc);		v.pop_back();		for (int i = 0; i < v.size(); i++) {			sum += v[i];		}		if (v.front() - v.back() >= 4) cout << "KIN\n";		else cout << sum << endl;	}}