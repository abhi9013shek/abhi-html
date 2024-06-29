#include<iostream>
using namespace std;
int perfect(int num){
	int i,sum;

	sum=0;
	for(i=1;i<num;i++){
		
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(num==sum){
	cout<<"PERFECT NUM :";
	}
	else{
		cout<<"NOT PERFECT NUM :";
	}return num;
}
int main(){
	cout<<perfect(6);
}
