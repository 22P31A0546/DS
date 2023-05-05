#include<stdio.h>
void merge(int *A,int L,int M,int R){
	int res[R-L+1];
	int i=L,j=M+1,k=0,z;
	while (i<=M && j<=R){
	if(A[i] <= A[j]) res[k++]=A[i++];
	else res[k++] = A[j++];
}

	while(i<=M)
	 res[k++]=A[i++];
	while(j<=R) 
	res[k++]=A[j++];
	for (z=L;z<=R;z++){
		printf("%d ",res[z]);
	}
}
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	int A[n];
	for (i=0;i<n;i++)
	scanf("%d",&A[i]);
    merge(A,0,5,n-1);
    return 0;
}
