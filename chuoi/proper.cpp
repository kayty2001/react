#include<iostream>
#include<string.h>
using namespace std;
void proper(char st[]);
int main(){
	char st[100];
	cout<<"nhap chuoi : ";
	gets(st);
	proper(st);
	cout<<"\nchuoi nhan duoc : "<<st;

}
void proper(char st[]){
	int i;
	/*if(st[0]!=' ')
		if(st[0]>='a'&&st[0]<='z')
				st[0]-=32;*/
	for(i=1;i<strlen(st);i++){
		if(st[i-1]==' '&&st[i]!=' ')
			if(st[i]>='a'&&st[i]<='z')
				st[i]-=32;
		else if(st[i-1]!=' '&&st[i]!=' ')
			if(st[i]>='A'&&st[i]<='Z')
				st[i]+=32;
	}
}
