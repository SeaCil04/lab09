#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan = 0,per = 0,pay = 0,inter = 0,sum  = 0;
    int y = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
    cin >> pay;
    
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(loan > 0){
	cout << fixed << setprecision(2); 
	inter = loan * (per/100);
	cout << setw(13) << left << y;
	y++;
	cout << setw(13) << left << loan;
	cout << setw(13) << left << inter;
	sum = inter + loan;
	cout << setw(13) << left << sum;
	if(pay > loan + inter){
	    pay = loan + inter;
	}
	cout << setw(13) << left << pay;
	loan = sum -pay;
	if(loan < 0){
	    loan = 0;
	}
	
	cout << setw(13) << left << loan;
	cout << "\n";
	
	}
	
	return 0;
}