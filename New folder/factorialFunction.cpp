#include<iostream>
using namespace std;
int factorial(int num){
	int i ,fact=1;
	for(i=1;i<=num;i++){
	fact=fact*i;

}
	return fact;
}
int main (){
	cout<<factorial(5);
}
