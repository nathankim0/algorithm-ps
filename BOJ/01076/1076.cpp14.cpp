#include <iostream>#include <algorithm>#include <vector>#include <queue>#include <string>#include <cstdio>using namespace std;int color(string c) {	if (c == "black") {		return 0;	}	else if (c == "brown") {		return 1;	}	else if (c == "red") {		return 2;	}	else if (c == "orange") {		return 3;	}	else if (c == "yellow") {		return 4;	}	else if (c == "green") {		return 5;	}	else if (c == "blue") {		return 6;	}	else if (c == "violet") {		return 7;	}	else if (c == "grey") {		return 8;	}	else if (c == "white") {		return 9;	}}long long gob(string c) {	if (c == "black") {		return 1;	}	else if (c == "brown") {		return 10;	}	else if (c == "red") {		return 100;	}	else if (c == "orange") {		return 1000;	}	else if (c == "yellow") {		return 10000;	}	else if (c == "green") {		return 100000;	}	else if (c == "blue") {		return 1000000;	}	else if (c == "violet") {		return 10000000;	}	else if (c == "grey") {		return 100000000;	}	else if (c == "white") {		return 1000000000;	}}int main() {	string str;	long long sum = 0;	for (int i = 0; i < 3; i++) {		cin >> str;		switch (i) {		case 0:			sum = 10 * color(str);			break;		case 1:			sum += color(str);			break;		case 2:			sum *= gob(str);			break;		}	}	cout << sum;}