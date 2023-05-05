#include<stdio.h>
int fact(int n){// n = 1
if (n == 1) return 1; //1 == 1
return n * fact(n - 1);//120
}
int main(){
	int n;
	scanf("%d",&n);//5
	int res = fact(n);//fact(5)
	printf("%d",res);
}
