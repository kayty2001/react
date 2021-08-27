#include<iostream>
#include<string.h>
using namespace std;
void demKT_DacBiet(char st[]);
int main(){
	char st[100];
	cout<<"nhap chuoi :";
	gets(st);
	demKT_DacBiet(st);
}
void demKT_DacBiet(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]!=32)
			if(st[i]>46&&st[i]<58)
				dem++;
	cout<<"\nchuoi co "<<dem<<" ky tu so.";
}
