#include<stdio.h>
void merge(int *A,int m,int *B,int n){
	int res[m+n];
	//write the logic
	int i=0,j=0,k=0,z=0;
	while (i<m && j<n){
	if(A[i] <= B[j]) res[k++]=A[i++];
	else res[k++] = B[j++];
}
while(i<m)
 res[k++]=A[i++];
while(j<n) 
res[k++]=B[j++];
for (z=0;z<m+n;z++){
	printf("%d",res[z]);
}

int main()
{
	int m,n;
	int i;
	scanf("%d%d",&m,&n);
	int A[m],B[n];
	for (i=0;i<m;i++) scanf("%d",&A[i]);
	for (i=0;i<n;i++) scanf("%d",&B[i]);
    merge(A,m,B,n);
}
