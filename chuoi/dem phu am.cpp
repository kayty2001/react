#include<iostream>
#include<string.h>
using namespace std;
void demPhuAm(char st[]);
int kTraPhuAm(int n);
int main(){
	char st[100];
	cout<<"nhap chuoi :";
	gets(st);
	demPhuAm(st);
}
int kTraPhuAm(int n){
	if(n=='u'||n=='U'||n=='a'||n=='A'||n=='e'||n=='E'||n=='o'||n=='O'||n=='i'||n=='I')
		return 1;
	else return 0;
}
void demPhuAm(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]!=32)
			if(kTraPhuAm(st[i])==1)
				dem++;
	cout<<"\nchuoi co "<<dem<<" phu am.";
}
