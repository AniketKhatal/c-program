//Program Name:Print the number from 1 to 100 ,skip the value that are divisible by 3;
/*
#include<iostream>
using namespace std;
int main(){
	int i=0;
	for(int i=0;i<=100;i++){
		if(i%3!=0){
			continue;	
		}
		cout<<"\n"<<i;
	}
}
*/
//prime or not 

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			cout<<"not prime"<<endl;
			break;
		}
	}
	if(i==n){
		cout<<"Prime"<<endl;
	}
}
