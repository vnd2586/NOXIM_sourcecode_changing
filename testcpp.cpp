#include<iostream>
using namespace std;

int main(){
	float a = 5.3;
	float b = 3;

	for(int i = 0; i<3; i++){
		a/=a+i;
		cout<<"a = "<<a<<endl;
		b+=b*i;
		cout<<"b = "<<b<<endl;
	}
return 0;
}
