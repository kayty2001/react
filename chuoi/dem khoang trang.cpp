#include<iostream>
#include<string.h>
using namespace std;
void demKhoangTrang(char st[]);
int main(){
	char st[100];
	cout<<"nhap chuoi :";
	gets(st);
	demKhoangTrang(st);
}
void demKhoangTrang(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]==32)
			dem++;
	cout<<"\nchuoi co "<<dem<<" khoang trang.";
}
