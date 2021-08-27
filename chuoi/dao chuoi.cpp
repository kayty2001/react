#include<iostream>
#include<string.h>
using namespace std;
void daoNguocChuoi(char ten[],char hoten[]);
int main(){
	char ten[100];
	char hoten[100];
	cout<<"nhap chuoi : ";
	gets(hoten);
	daoNguocChuoi(ten,hoten);
	
}
void daoNguocChuoi(char ten[],char hoten[]){
	int i=strlen(hoten)-1;
	int j;
	while(hoten[i]!=' ')
		i--;
	for(j=i+1;j<strlen(hoten);j++)
		ten[j-i-1]=hoten[j];
	ten[j-i]='\0';
	hoten[i]='\0';
	strcat(ten,"");
	strcat(ten,hoten);
	cout<<"chuoi sau khi dao : "<<ten;
}
