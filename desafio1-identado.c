#include<stdio.h>
int main(){
	char A[4096],B[99],C[26]={0},D[26],E[4096];
	int F=0,i,j,k;i=0;
	scanf("%s %d\n%s",B,&F,E);
	i=j=0;
	while(B[i]!=0){
		if(C[(B[i]-'a')]==0){
			C[B[i]-'a']=1;
			D[j]=B[i]; 
			j++;}
		i++;}
	for(i=0;i<26;i++){
		if(C[i]==0){
			D[j]=i+'a'; 
			j++;}}
	i=0;
	while(E[i]!=0){
		j=0;
			while(D[j]!=E[i])
				j++;
		E[i]=j%10+1;
		i++;}
	i=j=k=0;
	while(E[i]!=0){
		if(j<F)
			j=j*10+E[i]-1;
		else{
			A[k]=D[j-F];
			j=E[i]-1;
			k++;}
		i++;}
	A[k++]=D[j-F];
	A[k++]=0;
	puts(A);
	return 0;}
