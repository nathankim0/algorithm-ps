#include <iostream>#include <stack>using namespace std;int arr[101][101];int main() {	int n;	int x, y, d, g;	cin >> n;	while (n--) {		cin >> x >> y >> d >> g; //x,y 시작점 d 방향 g 세대		stack<int>dir;		stack<int>temp;		dir.push(d);		temp.push(dir.top());		arr[x][y] = 1;		for (int i = 1; i <= g; i++) {			while (!temp.empty()) {				dir.push((temp.top() + 1)%4);				temp.pop();			}			temp = dir;		}		stack<int> result;		while (!dir.empty()) {			result.push(dir.top());			dir.pop();		}		/*while (!result.empty()) {			cout << result.top() << " ";			result.pop();		}		cout << endl;*/		while (!result.empty()) {			int a = result.top();			result.pop();			switch (a) {			case 0:				x = x + 1;				arr[x][y] = 1;				break;			case 1:				y = y - 1;				arr[x][y] = 1;				break;			case 2:				x = x - 1;				arr[x][y] = 1;				break;			case 3:				y = y + 1;				arr[x][y] = 1;				break;			}		}	}	int  cnt = 0;	for (int i = 0; i <= 100; i++) {		for (int j = 0; j <= 100; j++) {			if (arr[i][j] == 1 && arr[i + 1][j] == 1 && arr[i][j + 1]==1 && arr[i + 1][j + 1] == 1) {				cnt++;			}		}	}	cout << cnt;}