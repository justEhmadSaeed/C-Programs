//consloe calculator in c++

#include<iostream>

#include<math.h>

using namespace std;

int main()
{
	//declaring variables
	int n; //Variable for case
	
	int a,b; //variables to store two numbers
	
	float r; //Variable to store result
	
	cout<<" [+] [-] [*] [/] [%] [pow] [sqrt]"<<endl;
	
	cout<< "Enter a Number you want to perform operation \n  ";
	
	cin>> n ;
	
	switch(n)
	{
		//Addition
		case 1:
		
		cout<< "Enter a Number:  ";
		
		cin>> a;
		
		cout<< "Enter a Number:  ";
		
		cin>> b ;
		
		r = a+b;
		
		cout<< r;
		
		break;
	
	 	//Subtraction
		case 2:
			
		cout<< "Enter a Number:  ";
		
		cin>> a ;
		
		cout<< "Enter a Number:  ";
		
		cin>> b ;
		
		r = a-b;
		
		cout<< r;
		
		break;
	
	
		//Multiplication
		case 3:
		
		cout<< "Enter The First  Number:  ";
		
		cin>> a ;
		
		cout<< "Enter The Second Number:  ";
		
		cin>> b ;
		
		r = a*b;
		
		cout<< r;
		
		break;
	
		//Division
		case 4:
		
		cout<< "Enter The Numerator:  ";
		
		cin>> a ;
		
		cout<< "Enter The Demoinator:  ";
		
		cin>> b ;
		
		r = a/b;
		
		cout<<"Quotient is"<< r;
		
		break;
	
		//Modulus
		
		case 5:
		
		cout<< "Enter a Number:  ";
		
		cin>> a ;
		
		cout<< "Enter a Number:  ";
		
		cin>> b ;
		
		r = a % b;
		
		cout<< r;
		
		break;
	
		//power
		
		case 6:
		
		cout<< "Enter a number:  ";
		
		cin>> a ;
		
		cout<<"enter the power: ";
		
		cin>> b;
		
		r =pow(a,b);
		
		cout<<"power:"<<r;
	    
		break;
	
		//Square root
		
		case 7:
		
		cout<< "Enter a Number:  ";
		
		cin>> a ;
		
		r = sqrt(a);
		
		cout<< r;
		
		break;
		
		default:
		
		cout<< "Enter a Invalid Number";
	
	}
	
	
	return 0;
}
