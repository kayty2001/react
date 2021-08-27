#include<iostream>
#include<string.h>
using namespace std;
void demTu(char st[]);
int main(){
	char st[100];
	cout<<"nhap chuoi :";
	gets(st);
	demTu(st);
}
void demTu(char st[]){
	int i,dem=0;
	if(st[0]!=' ')
		dem=1;
	for(i=0;i<strlen(st);i++)
		if(st[i]==' '&& st[i+1]!=' ')
			dem++;
	cout<<"\nchuoi co "<<dem<<" tu.";
}
