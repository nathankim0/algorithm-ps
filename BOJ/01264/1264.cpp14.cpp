#include <iostream>#include <string>using namespace std;int main(){	string a;	int cnt=0;	getline(cin, a, '#');	for (int i = 0; i < a.size()+1; i++) {		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'|| a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {			cnt++;		}		else if (a[i] == '\n') {			if (a[i+1] == '#') {				cout << cnt + 1 << endl;			}			else {				cout << cnt << endl;				cnt = 0;			}		}	}}