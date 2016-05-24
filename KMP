/*
  KMP..
*/
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
#define MAX 1000001
 
char T[MAX], P[MAX];
int K[MAX];
int cnt;
vector<int> res;
 
int main(){
    gets(T); gets(P);
 
    int i = 0;
    int j = 0;
    while (P[++i]){ // make a KMP table
        if (P[i] == P[j])
            K[i] = ++j;
        else if (j)
            j = K[j - 1];
        else
            K[i] = 0;
    }
 
    i = 0, j = 0;
    int len = strlen(P);
    while (T[i]){ // KMP Algorithm
        if (T[i] == P[j]){
            j++;
            if (j == len){
                cnt++;
                res.push_back(i - len + 2);
                j = K[j - 1];
            }
            i++;
        }
        else if (j)
            j = K[j - 1];
        else{
            j = 0;
            i++;
        }
    }
 
    printf("%d\n", cnt);
    for (int i = 0; i < res.size(); i++)
        printf("%d ", res[i]);
 
    return 0;
}
