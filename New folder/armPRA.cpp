#include<iostream>
using namespace std;
int main (){
	int num,sum=0,temp;

	for(num=1;num<=1000;num++){
			temp=num;
			int sum=0;
		while(temp>0){
			int r=temp%10;
			sum=sum+(r*r*r);
			temp=temp/10;
		}
		if(num==sum){
			cout<<num<<"\n";
		}
	}
}
