#include <stdio.h>
#include <stdlib.h>

void xuLy(int a[],int &n){
	FILE*f;
	f = fopen("ccc.cpp","r");
	if(f != NULL){
		fscanf(f,"%d",&n);
		for(int i=0; i < n;i++)
			fscanf(f,"%d",&a[i]);
	}
	else printf("ERROR!!!");
}
int main(){
	int m[100],n=0;
	printf("nhap ten file: ");
	scanf("%c",m[n]);
	xuLy(m,n);
}

