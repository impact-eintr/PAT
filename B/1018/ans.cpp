#include<stdio.h>
#include<iostream>
using namespace std;

int change(char c){	//相同的功能集成为方法 
	if(c=='C') return 1;
	if(c=='J') return 2;
	return 0;
}

int main(){
	int k1,k2,a;
	char q,p;
	int rw=0,lw=0,ping=0;
	
	char s[3]={'B','C','J'};//1,2,3
	int sl[3]={0},sr[3]={0};//统计left和right出包剪锤时赢的次数 
	cin>>a;
	
	for(int i=0;i<a;i++){
		cin>>q>>p;	
		
		k1=change(q);		//散列为数字 
		k2=change(p);
		
		if((k1+1)%3==k2){	//又简洁美观，又不容易出错 
			lw++;
			sl[k1]++;
		}else if(k1==k2){
			ping++;
		}else{
			rw++;
			sr[k2]++;
		}	
	}
	
	cout<<lw<<" "<<ping<<" "<<rw<<endl;
	cout<<rw<<" "<<ping<<" "<<lw<<endl;
		
	int maxa=0,maxb=0;
	for(int i=0;i<3;i++){
		if(sl[i]>sl[maxa]) maxa=i;
		if(sr[i]>sr[maxb]) maxb=i;
	}
	
	printf("%c %c",s[maxa],s[maxb]);
	return 0;
}
