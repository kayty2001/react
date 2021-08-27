#include<iostream>
#include<string.h>
using namespace std;
void demKhoangTrang(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]==32)
			dem++;
	cout<<"\nchuoi co "<<dem<<" khoang trang.";
}
void demKT_DacBiet(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]!=' ')
			if(st[i]>32&&st[i]<48||st[i]>57&&st[i]<65)
				dem++;
	cout<<"\nchuoi co "<<dem<<" ky tu dac biet.";
}
void demKyTuHoa(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]>64 && st[i]<91)
			dem++;
	cout<<"\nchuoi co "<<dem<<" ky tu hoa.";
}
void demKT_so(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]!=32)
			if(st[i]>46&&st[i]<58)
				dem++;
	cout<<"\nchuoi co "<<dem<<" ky tu so.";
}
int kTraPhuAm(int n){
	/*int pa;
	pa={65,69,73,79,85};
	if(n==pa || n==pa+32)
	*/
	if(n=='u'||n=='U'||n=='a'||n=='A'||n=='e'||n=='E'||n=='o'||n=='O'||n=='i'||n=='I')
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
void demPhuAm(char st[]){
	int i,dem=0;
	for(i=0;i<strlen(st);i++)
		if(st[i]!=32)
			if(kTraPhuAm(st[i])==1)
				dem++;
	cout<<"\nchuoi co "<<dem<<" phu am.";
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
void proper(char st[]){
	int i;
	if(st[0]!=32)
		if(st[0]>='a'&&st[0]<='z')
				st[0]-=32;
	for(i=0;i<strlen(st);i++)
		if(st[i-1]==32&&st[i]!=32)
			if(st[i]>='a'&&st[i]<='z')
				st[i]-=32;
		else if(st[i]>='A'&&st[i]<='Z')
			st[i]+=32;
}
int main(){
	char st[100];
	cout<<"nhap chuoi :";
	gets(st);
	demKhoangTrang(st);
	demKT_DacBiet(st);
	demKyTuHoa(st);
	demKT_so(st);
	demNguyenAm(st);
	demPhuAm(st);
	demTu(st);
	proper(st);
}

