#include<iostream>
using namespace std;
int main(){
	int num,i,sum=0;
	for(num=1;num<=100;i++){
		sum=0;
		for(i=1;i<num;i++){
			if(num%i==0){
				sum=sum+i;
			}
		}
		if(num==sum){
			cout<<num<<"\n";
		}
	}
	return 0;
}
