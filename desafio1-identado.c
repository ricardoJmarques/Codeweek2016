#include<stdio.h>
int main(){
	char A[4096],B[99],C[26]={0},D[26],E[4096];//D chave expandida
	int F=0,i,j,k;i=0;
	scanf("%s %d\n%s",B,&F,E); //B chave; F numero; E dados a encriptar
	i=j=0;
	while(B[i]!=0){//cria chave expandida
		if(C[(B[i]-'a')]==0){//C[] é uma tabela auxiliar que marca as letras já ocorridas
			C[B[i]-'a']=1;
			D[j]=B[i];//preenche a chave expandida 
			j++;}
		i++;}
	for(i=0;i<26;i++){//preenche a chave expandida com as letras em falta
		if(C[i]==0){
			D[j]=i+'a';//cria a primeira tabela de substituição 
			j++;}}
	i=0;
	while(E[i]!=0){//faz primeira substituicao
		j=0;
			while(D[j]!=E[i])//calcula deslocamento
				j++;
		E[i]=j%10+1;//substitui o caracter
		i++;}
	i=j=k=0;
	while(E[i]!=0){//faz a segunda substituição
		if(j<F)
			j=j*10+E[i]-1;
		else{
			A[k]=D[j-F];
			j=E[i]-1;
			k++;}
		i++;}
	A[k++]=D[j-F];//adiciona o ultimo byte
	A[k++]=0;//adiciona o terminador á string
	puts(A);
	return 0;}
