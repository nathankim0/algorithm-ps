#include <iostream>using namespace std;int main() {	int N[3], tmp=0;	for (int i = 0; i < 3; i++) {		cin >> N[i];	}	for (int i = 0; i < 3; i++) {		for (int j = 0; j < 2; j++) {			if (N[j] > N[j + 1]) {				tmp = N[j];				N[j] = N[j + 1];				N[j + 1] = tmp;			}		}	}		for (int i = 0; i < 3; i++) {		cout <<N[i]<<" ";	}}