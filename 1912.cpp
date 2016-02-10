/*
	DP
	Kadane's algorithm
	- (maximum contiguous subarray problem)
*/
#include<cstdio>
int N, max_n, max_c;
int arr[100001];
void kadane(){
	max_n = arr[0];
	max_c = arr[0];
	for (int i = 1; i < N; i++){
		max_c = arr[i] > max_c + arr[i] ? arr[i] : max_c + arr[i];
		max_n = max_c > max_n ? max_c : max_n;
	}
}
int main(){
	scanf("%d", &N);
	for (int i = 0; i < N; i++){ scanf("%d", &arr[i]); }
	kadane();
	printf("%d\n", max_n);
	return 0;
}
