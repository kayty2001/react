#include<iostream>
#include<string.h>
using namespace std;
void demNguyenAm(char st[]);
int kTraPhuAm(int n);
int main(){
	char st[100];
	cout<<"nhap chuoi :";
	gets(st);
	demNguyenAm(st);
}
int kTraPhuAm(int n){
	int pa;
	pa={65,69,73,79,85};
	if(n==pa || n==pa+32)
	//if(n=='u'||n=='U'||n=='a'||n=='A'||n=='e'||n=='E'||n=='o'||n=='O'||n=='i'||n=='I')
		return 1;
	else return 0;
}
void demNguyenAm(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]!=32)
			if(kTraPhuAm(st[i])==0)
				dem++;
	cout<<"\nchuoi co "<<dem<<" nguyen am.";
}
