#include<iostream>
using namespace std;
int main(){
	int fact,num,sum=0,r;
//	cout<<"enter a num :";
//	cin>>num;
for(int num=1;num<=1000;num++){
	
	int temp=num;
	while(temp>0){
	r=temp%10;
	fact=1;
	
	for(int i=1;i<=r;i++){
	fact=fact*i;
	
}
	sum=sum+fact;
	temp=temp/10;
	}
	if (num==sum){
	cout<<num<<"\n";	
	}
}
}

