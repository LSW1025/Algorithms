/*
	KMP
*/
#include<cstdio>
#include<vector>
#define MAX 1000001
int L;
char P[MAX], copy[MAX];
int M[MAX];
int i, j, ans;
int main(){
	scanf("%d", &L);
	scanf("%s", P);
	
	while (P[++i]){ 
		if (P[i] == P[j])
			M[i] = ++j;
		else if (j){
			j = M[j-1];
			i--;
		}
	}
	printf("%d\n", L-M[L-1]);
	
	return 0;
}
