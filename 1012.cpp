/*
	DFS
*/
#include<cstdio>
#include<cstring>
#include<vector>
#define MAX 51
using namespace std;

bool arr[MAX][MAX];
int T, M, N, K, X, Y;
int cnt;
vector<pair<int, int> > vt;
vector<int> res;

void dfs(int x, int y){
	if (!arr[x][y])
		return;
	arr[x][y] = false;
	if (x > 0 && arr[x-1][y])
		dfs(x - 1, y);
	if (y > 0 && arr[x][y-1])
		dfs(x, y - 1);
	if (x < M && arr[x + 1][y])
		dfs(x+1, y);
	if (y < N && arr[x][y+1])
		dfs(x, y + 1);
}
int main(){
	scanf("%d", &T);
	while (T--){
		memset(arr, 0, sizeof(arr));
		cnt = 0;
		vt.clear();
		scanf("%d %d %d", &M, &N, &K);
		while (K--){
			scanf("%d %d", &X, &Y);
			arr[X][Y] = true;
			vt.push_back({ X, Y });
		}
		for (int i = 0; i < vt.size(); i++){
			if (arr[vt[i].first][vt[i].second])
				cnt++;
			dfs(vt[i].first, vt[i].second);
		}
		res.push_back(cnt);
	}
	for (int i = 0; i < res.size(); i++)
		printf("%d\n", res[i]);
	return 0;
}
