#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std ;
int main(){
	char texto[100];
	char abededario[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cout<<"INGRESAR TEXTO "<<endl;
	gets(texto);

	int x;
	for(int i=0;i<strlen(texto);i++){
		x=0;
		while(x<52){
			if(texto[i]==abededario[x] && (x<23||(x>=26 &&x<49))){
				texto[i]=abededario[x+3];
				x=52;
			}
			if(texto[i]==abededario[x] && (x>=23 && x<26)){
				if(texto[i]=='x'){
					texto[i]='a';
				}
				if(texto[i]=='y'){
					texto[i]='b';
				}
				if(texto[i]=='z'){
					texto[i]='c';
				}
				x=52;
			}
			if(texto[i]==abededario[x] && (x>=49 && x<52)){
				if(texto[i]=='X'){
					texto[i]='A';
				}
				if(texto[i]=='Y'){
					texto[i]='B';
				}
				if(texto[i]=='Z'){
					texto[i]='C';
				}
				x=52;
			}
			x++;
		}
	}
	cout<<texto;
	return 0;
}
