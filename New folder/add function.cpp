#include<iostream>
using namespace std;
int add(int a, int b){
	int sum = a+b;
	return sum;
}
int main(){
	cout << add(5,8) << "\n";
	cout << add(5,2);
}
