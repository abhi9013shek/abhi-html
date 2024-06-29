#include<iostream>
using namespace std;
	int h,w;
void bmi(){


	cout<<"enter the weight and height :";
	cin>>w>>h;
	int bmi=w/(h*h);
	cout<<bmi;
}
int main(){

	bmi();
}
