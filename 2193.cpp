/*
	DP
*/
#include<cstdio>
#define MAX 100
unsigned long long DP[2][MAX];
int N;
int main(){
	scanf("%d", &N);
	DP[1][1] = 1;
	DP[0][1] = 0;

	for (int i = 2; i <= N; i++){
		DP[0][i] = DP[1][i - 1] + DP[0][i - 1]; 
		DP[1][i] = DP[0][i - 1];				
	}
	printf("%llu\n", DP[1][N] + DP[0][N]);
	return 0;
}
