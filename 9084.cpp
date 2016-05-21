#include<cstdio>
#include<cstring>

int T, N, M;
int dp[12345];
int a[12345];

int main(){
	scanf("%d", &T);
	while (T--){
		scanf("%d", &N);
		for (int i = 0; i < N; i++)	scanf("%d", &a[i]);
		scanf("%d", &M);
		dp[0] = 1;
		/*
		  a[0]~a[j] 까지의 동전만 사용해서 i원을 만드는 경우를 dp를 이용해서 구함
		*/
		for (int j = 0; j < N; j++){
			for (int i = 1; i <= M; i++){
				if (i - a[j] >= 0){ 
					dp[i] += dp[i - a[j]];
				}
			}
		}
		printf("%d\n", dp[M]);
		memset(dp, 0, sizeof dp);
	}
	return 0;
}
