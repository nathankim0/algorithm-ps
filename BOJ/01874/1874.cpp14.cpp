#include <iostream>#include <stack>#include <queue>using namespace std;int main() {	int n;		int tmp;	int task = 1;	bool no=0;	queue<int> q;	stack<int> s;	vector<char> vec;	cin >> n;	for (int i = 0; i < n; i++) {		scanf("%d", &tmp);		q.push(tmp);	}		for (int i = 0; i < q.front(); i++) {		s.push(task);		vec.push_back('+');		task++;	}	while (!q.empty()) {		if (s.empty()==1||s.top() < q.front()) {			s.push(task);			vec.push_back('+');			task++;		}		else if (s.top() == q.front()) {			s.pop();			q.pop();			vec.push_back('-');		}		else if (s.top() > q.front()) {			no = 1;			break;		}	}	if (no == 1) {		cout << "NO";	}	else {		for (int i = 0; i < vec.size(); i++) {			printf("%c\n", vec[i]);		}	}}