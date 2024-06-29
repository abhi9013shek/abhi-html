#include<iostream>
using namespace std;
int main(){
	for(int num=1; num<=1000; num++){
		int sum=0;
		int temp = num;
		while (temp>0){
			int r = temp%10;
			sum = sum+r*r*r;
			temp = temp/10;
		}
		if (num==sum){
			cout << num << "\n";
		}
	}
}
