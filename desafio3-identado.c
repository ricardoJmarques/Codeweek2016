#include<stdio.h>
int main(){
	char A[2][99],B[4096]={0},a,C[2][99]={{0},{0}},D[4096]={0};
	int i,j,k,l,m,n=0;
	scanf("%s\n%s\n%s\n",A[0],A[1],B);
	m=0;
	while(B[m]!=0)
		m++;
	while(n<2){
		l=0;
		while(A[n][l]!=0){
			C[n][l]=l+1;
			l++;}
		i=k=0;
		while(!k){
			k=1;
			for(j=l-1;j>i;j--)
				if(A[n][j-1]>A[n][j]){
					a=A[n][j-1];
					A[n][j-1]=A[n][j];
					A[n][j]=a;
					a=C[n][j-1];
					C[n][j-1]=C[n][j];
					C[n][j]=a;
					k=0;}
			i++;}
		i=j=k=0;
		while(C[n][k]!=0){
			while(i+C[n][k]-1<m){
				D[j]=B[i+C[n][k]-1];
				j++;
				i+=l;}
			k++;
		i=0;}
		i=0;
		while(i<m){
			B[i]=D[i];
			i++;}
		n++;}
	puts(B);
	return 0;}
