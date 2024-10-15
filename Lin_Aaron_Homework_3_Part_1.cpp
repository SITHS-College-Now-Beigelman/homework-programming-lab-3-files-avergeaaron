// Aaron Lin
// 10/15/2024
// Homework 3 Part 1

#include <iostream> 
#include <fstream>
#include <string>

using namespace std;
 
//beginning of code
int main ( ) 
{    
    ifstream transaction; //input file
    double bal; //bank balance
    double trans; //transaction
    char dollar = '$'; //$ sign
    char type; //type of transaction
    
    transaction.open("transaction.txt"); //opens the input file

    transaction >> bal; //sets the input value to the balance
    cout << "\nYou have " << dollar << bal << " in your bank account" << endl; //states the bank balance
    
    for(int i = 1; i <= 7; i++) //runs the code 7 times
    {
        transaction >> type >> trans; //sets the input value to the type of transaction
        
        switch(type) //change how the code run depends on type
        {
            case 'W': //when type = W
                bal = bal - trans; //subtract transaction from current balance and make a new balance
                cout << "\nYou have withdrawed " << dollar << trans << " from your bank account" << endl; //states the amount withdrawed
                cout << "Now you have " << dollar << bal << " in your bank account" << endl; //states the new balance
                break; //ends the case
            case 'D': //when type = D
                bal = bal + trans; //add transaction from current balance and make a new balance
                cout << "\nYou have deposited " << dollar << trans << " into your bank account" << endl; //states the amount deposited
                cout << "Now you have " << dollar << bal << " in your bank account" << endl; //states the new balance
                break; //ends the case
        }
    }

    transaction.close(); //close the input file

    cout << "\nYour final bank balance is " << dollar << bal << endl; //states the final bank balance
    cout << "Thank you for running this program :)" << endl; //prints Thank you for running this program :)
 
    return 0; //ends code
}

/*
You have $5000 in your bank account

You have withdrawed $200 from your bank account
Now you have $4800 in your bank account

You have withdrawed $800 from your bank account
Now you have $4000 in your bank account

You have withdrawed $40 from your bank account
Now you have $3960 in your bank account

You have deposited $90 into your bank account
Now you have $4050 in your bank account

You have deposited $100 into your bank account
Now you have $4150 in your bank account

You have deposited $1000 into your bank account
Now you have $5150 in your bank account

You have withdrawed $20 from your bank account
Now you have $5130 in your bank account

Your final bank balance is $5130
*/