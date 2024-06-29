 #include<iostream>
 using namespace std;
 int main(){
 	int rnum=0,num,rem;
 	cout <<"enter a num:";
 	cin>>num;
 	while(num>0){
 		rem=num%10;
 		rnum=rnum*10+rem;
 		num=num/10;
	 }
	 cout<<"reverse num is :"<<rnum;
	 return 0;
 }
