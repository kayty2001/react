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
		if(st[i]!=' ')
			if(st[i]>32&&st[i]<48||st[i]>57&&st[i]<65)
				dem++;
	cout<<"\nchuoi co "<<dem<<" ky tu dac biet.";
}
