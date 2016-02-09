/*
	DP
	so slow
*/
#include<cstdio>
#include<vector>
using namespace std;

int N, M,K;
int arr[301][301];
int DP[301][301];
int i, j, x, y;
vector<int> vt;
void find(){
	for (int a = i; a <= x; a++){
		DP[a][j] = DP[a - 1][y] + arr[a][j];
		for (int b = j+1; b <= y; b++){
			DP[a][b] = DP[a][b - 1] + arr[a][b];
		}
	}
	vt.push_back(DP[x][y]);

	for (int a = i; a <= x; a++)
		for (int b = j; b <= y; b++)
			DP[a][b] = 0;
}

int main(){
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			scanf("%d", &arr[i][j]);
	scanf("%d", &K);
	while (K--){
		scanf("%d %d %d %d", &i, &j, &x, &y);
		find();
	}
	for (int i = 0; i < vt.size(); i++)
		printf("%d\n", vt[i]);
	return 0;
}
