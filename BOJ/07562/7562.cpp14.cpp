#include <iostream>#include <queue>using namespace std;int n;int x, y;int x2, y2;int dx[] = { 1, 2,2,1,-1,-2,-2,-1 };int dy[] = { -2,-1,1,2, 2, 1,-1,-2 };int t;int main() {	cin >> t;	while(t--) {		int r=0;		int arr[400][400] = { 0, };		bool check[400][400] = { false, };		queue<pair<int, int>> q;		pair<int, int> p;		bool cc = false;		cin >> n;		cin >> x >> y;		cin >> x2 >> y2;		if (x == x2&&y == y2) {			cout << "0\n";			continue;		}		q.push(make_pair(y, x));		check[y][x] = true;		while (!q.empty()) {			p = q.front();			q.pop();			for (int i = 0; i<8; i++) {				int ny = p.first + dy[i];				int nx = p.second + dx[i];				if (nx == x2&&ny == y2) {					r = arr[p.first][p.second] + 1;					cc = true;					break;				}				else if (0 <= nx&&nx<n && 0 <= ny&&ny<n&&check[ny][nx] == false) {					arr[ny][nx] = arr[p.first][p.second] + 1;					check[ny][nx] = true;					q.push(make_pair(ny, nx));				}			}			if (cc) {				cout << r << '\n';				break;			}		}	}	return 0;}