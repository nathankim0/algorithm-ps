#include <iostream>#include <vector>#include <math.h>using namespace std;int main(){	while (1) {		int t;		cin >> t;		if (t == 0)break;		vector<int> v;		int a=t,cnt=0;		while (t != 0) {			v.push_back(t % 10);			t/=10;			cnt++;		}		int b=0;		for (int i = cnt; i >=1; i--) {			b = b + v[cnt-i] * pow(10, i-1);		}		if (a == b) cout << "yes\n";		else cout << "no\n";	}}