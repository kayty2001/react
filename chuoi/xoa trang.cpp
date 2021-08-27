#include<iostream>
#include<string.h>
using namespace std;
void xoaKhoangTrang(char st[]);
int main(){
	char st[100];
	cout<<"nhap chuoi : ";
	gets(st);
	xoaKhoangTrang(st);
	cout<<"chuoi sau khi xoa : "<<st;
}
void xoaKhoangTrang(char st[]){
	int i=1;
	while(i<strlen(st)){
		if(st[i-1]==' ' && st[i]==' ')
			for(int j=i;j<strlen(st);j++)
				st[j]=st[j+1];
		else i++;
		if(st[0]==' ')
			for(int j=i;j<strlen(st);j++)
				st[j]=st[j+1];
		if(st[strlen(st)-1]==' ')
			st[strlen(st)-1]='\0';
	}
}

