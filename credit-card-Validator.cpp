#include <iostream>


using namespace std;

int main(){
	int credit[16];
	cout<<"please inter your card 16 numbers\n";
	for(int i=0; i<16;i++){
		cin>>credit[i];
	}
	int e=0,o=0,f=0;
	
	for( int i=0; i<16;i++){
		if((i%2)==0){
			if((2*credit[i])>=10){
				e +=(2*credit[i])-9;
			}else{
				e+= 2*credit[i];
			}
		}else{
			o += credit[i];
		}
	}
	
	
	f = e +o;
	if((f%10)==0){
		cout<<"Your credit Card Is Valid";
	}else{
		cout<<"Your credit Card Is not Valid ";
	}
	
}
