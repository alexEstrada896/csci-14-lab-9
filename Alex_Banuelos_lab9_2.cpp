/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>

int main()
{
	double pennies = 0.01;
	double amountPennies;
	double nickles = 0.05;
	double amountNickles;
	double dimes = 0.10;
	double amountDimes;
	double quarters = 0.25;
	double amountQuarters;

//asks user to enter amount of pennies,nickles,dimes and quarters
	cout <<"Enter amount of coind to make a dollar and win! "<<endl;
	cout <<"Pennies: "<<endl;
	cin>>amountPennies;
	cout<<"Nickles: "<<endl;
	cin >> amountNickles;
	cout<<"Dimes: "<<endl;
	cin>>amountDimes;
	cout <<"Quarters: "<<endl;
	cin >> amountQuarters;
//calculates total amount
	double totalPennies = pennies*amountPennies;
	double totalNickles = nickles*amountNickles;
	double totalDimes = dimes*amountDimes;
	double totalQuarters = quarters*amountQuarters;
	double totalAmount = totalPennies+totalNickles+totalDimes+totalQuarters;
//prompts user if they made a dollor to win the game


 if (totalAmount == 1.00)
 {
    cout <<"Congratulations! You entered "<<amountPennies<<" pennies, "<<amountNickles<<" nickles "<<amountDimes<<" dimes and "<<amountQuarters<<" quarters, they make exactly one dollar"<<endl;
 } 
 
    else if (totalAmount > 1.00){
    cout<<"You entered "<<amountPennies<<" pennies, "<<amountNickles<<" nickles "<<amountDimes<<" dimes and "<<amountQuarters<<" quarters, the amount is more than 1 dollar"<<endl;
 
        
    } 
    
        else if (totalAmount < 1.00)
        cout<<"You entered "<<amountPennies<<" pennies, "<<amountNickles<<" nickles "<<amountDimes<<" dimes and "<<amountQuarters<<" quarters,the amount is less than a dollar"<<endl;
 
	return 0;
}