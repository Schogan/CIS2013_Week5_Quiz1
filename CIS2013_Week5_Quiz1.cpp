#include <iostream>
#include <cmath>
#include <stdio.h>

//Set false to true to run DEBUG
#define DEBUG false

using namespace std;
int first_num = 0;
int secon_num = 0;
int i = 0;
int j = 0;
int prime =0;

int prime_num(int first,int second){
	cout << "Your Prime numbers are: "<<endl;
	for (i=first;i<=second;i++){
		for (j=2; j<i; j++){
	        if (i % j == 0){
				if(DEBUG){cout<< "EXAMPLE"<<endl;}
				break;
			}
			if (i == j+1){
				cout << "	" << i <<endl;
			}
		}
	}
}

void lc_denominator(int first_num,int secon_num){
    int a,b;

    a=first_num;
    b=secon_num;

    while(a!=b){
		if(a < b){
		a=a+first_num;
		}
		else{
			b=b+secon_num;
	    }
    }

    cout<<"\nThe Least Common Denominator of "<<first_num<<" and "<<secon_num<<" is "<<a;
}	


int main(){
	
	
	cout << "Please enter your first number: " << endl;
	cin >> first_num;
	cout << "Please enter your second number: " << endl;
	cin >> secon_num;
	 
	prime_num(first_num,secon_num);
	lc_denominator(first_num,secon_num);
}