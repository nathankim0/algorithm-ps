#include <iostream>#include <string>using namespace std;int main() {	string str;	cin >> str;	int cnt = 0;	int cnt2 = 0;	for (int i = 0; i < str.length(); i++) {		if (str[i] == 'c') {			if (str[i + 1] == '-' || str[i + 1] == '=') {				cnt++;				i++;			}			else cnt++;		}		else if (str[i] == 'd') {			if (str[i + 1] == 'z') {				if (str[i + 2] == '=') {					cnt++;					i += 2;				}				else {					cnt+=2;					i++;				}			}			else if (str[i + 1] == '-') {				cnt++;				i++;			}			else cnt++;		}		else if (str[i] == 'l'&&str[i + 1] == 'j') {			cnt++;			i++;		}		else if (str[i] == 'n'&&str[i + 1] == 'j') {			cnt++;			i++;		}		else if (str[i] == 's'&&str[i + 1] == '=') {			cnt++;			i++;		}		else if (str[i] == 'z'&&str[i + 1] == '=') {			cnt++;			i++;		}		else {			cnt++;		}	}	cout << cnt;}