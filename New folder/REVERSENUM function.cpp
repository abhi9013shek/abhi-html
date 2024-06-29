#include<iostream>
using namespace std;
int reverse(int num){
	int r,rnum=0;
	while(num>0){
 		r=num%10;
 		rnum=rnum*10+r;
 		num=num/10;
	 }
	 return rnum;
}
int main (){
	cout<<reverse(987654321);
}
