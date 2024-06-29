#include<iostream>
using namespace std;
int factor(int num){
	int i;
	for(i=1;i<num;i++){
		if(num%i==0){
			cout<< i;
		}
	}
}
int main(){
	cout<<factor(6);
}
