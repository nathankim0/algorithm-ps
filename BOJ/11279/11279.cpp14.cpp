#include <iostream>#include <queue>using namespace std;priority_queue<int, vector<int>, less<int>>q;int main() {	ios_base::sync_with_stdio(0);	cin.tie(0);	int n;	cin >> n;	int tmp;	for (int i = 0; i < n; i++) {		cin >> tmp;		if (tmp != 0) {			q.push(tmp);		}		else {			if (q.empty()) {				cout << 0 << '\n';			}			else {				cout << q.top() << '\n';				q.pop();			}		}	}}