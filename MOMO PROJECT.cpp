#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
const int defaultpin=0000;
int attempts,select;
int pin;
string new_pin;
int o_pin,c_pin;
float balance;
char options;
balance=1000;
string number;
float amount;
string confirmNumber,reference;

cout<<"Main Menu"<<endl<<endl;
cout<<"1.Check Balance"<<endl<<endl;
cout<<"2.Transfer Money"<<endl<<endl;
cout<<"3.Reset/Change pin"<<endl<<endl;
cout<<"4.Exit"<<endl;
cin>>select;

if(select==1){
		cout<<"Enter momo pin"<<endl<<endl;
		cin>>pin;
		
		attempts++;
		if(pin != defaultpin){
			cout<<"Incorrect pin. Try again"<<endl<<endl;
		}
		
		else if(pin == defaultpin){
			cout<<"Your mobile money balance is Gh"<<balance<<endl;
		}
		
		while(pin != defaultpin && attempts <3);
		if(attempts>=3){
			cout<<"maximum attempts reached"<<endl;
		}
		
		
		sleep(3);
		system("cls");
}

else if(select==2){
	cout<<"Enter mobile number"<<endl<<endl;
	cin>>number;
	
	cout<<"Confirm mobile number"<<endl<<endl;
	cin>>number;
	
	while(number.size()!=10){
		cout<<"Invalid number"<<endl;
		cin>>number;
	}

   for(int i=0; i<3;i++){
   	if(number != confirmNumber){
   		cout<<"Numbers do no match"<<endl;
   		cout<<"Re-enter number : "<<endl;
   		cin>>confirmNumber;
	   }
   }	
	cout<<"Transfer Gh "<< amount  <<  " to "  <<  number<<endl<<endl;
	cout<<"Enter momo pin to proceed with transaction"<<endl<<endl;
	cin>>pin;
	
	attempts++;
	while(pin!=defaultpin && attempts<3)
	if(attempts>=3)	{
    	cout<<"Incorrect pin. Try again"<<endl;
	}
	
	cout<<"An amount of Gh"<<amount << " has been transferred to "  <<number<<endl<<endl;
	
	
}	

else if(select==3){
	cout<<"Enter old pin"<<endl<<endl;
	cin>>o_pin;
	
	while(o_pin!=defaultpin && attempts<3)
	if(attempts>=3){
		cout<<"Incorrect pin. Try again"<<endl<<endl;
	}
	
	while(o_pin==defaultpin){
		cout<<"Enter new pin"<<endl<<endl;
		cin>>new_pin;
		
		cout<<"Confirm new pin"<<endl<<endl;
		cin>>new_pin;
		
	while(new_pin.size() !=4){
		cout<<"Invalid pin"<<endl;
		cout<<"Re-enter pin : " <<endl;
	}
	}

       		cout<<"Your mobile money pin has successfully been changed"<<endl;
       		
       		while(select ==4){
       			return 0;
			   }
}	
     
	return 0;
} 
