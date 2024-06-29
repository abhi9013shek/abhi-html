#include<iostream>
using namespace std;
int main(){
	int num, sum=0, temp;
	cout << "Enter the number:";
	cin >> num;
	temp = num;
	while (temp>0){
		int r = temp%10;
		sum = sum+r*r*r;
		temp = temp/10;
	}
	if (num==sum){
		cout << "Armstrong number";
	}
	else{
		cout << "Not Armstrong number";
	}
}
