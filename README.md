# Mini-Bank

![Untitled design (1)](https://github.com/Anshul-V/Mini-Bank/assets/134433637/dd43850c-bb06-4084-b038-0c7b9b9ca4a2)

## Description 
The bank 
## Introduction
This code implements a simple ATM system using C++. It allows the user to access their account by entering their account number and password. Once logged in, the user can perform various actions such as  viewing user details, checking balance, withdrawing cash, depositing cash, and updating mobile number. The program uses a switch statement to perform different actions based on the user's choice. If the user chooses to exit, it displays a message "Thankyou! Have a good day." and terminates the program.

## Concepts used
* Classes and objects (OOPS)
* Control flow statements (If-else, switch)
* Basic arithmetic operations
* Input/Output operations such as 'cin', 'cout' to prompt the user for input for display the messages.

## A closer look at the code
### Class Bank Account : 
A class named "bank_account" has been created with the following private attributes,
1. Account number as "accountNumber" of integer type.
2. Password as "password" of integer type.
3. Account balance as "balance" of type float.
4. Mobile number as "mobileNumber" of type string.
It also has a public attribute,
1. Name of the user as "name" of type string.

### Constructor :
The constructor initializes the attributes of the class.

### Check balance function
To check the balance, a void function named "checkBalance" has been created which displays the balance money when selected.

### Withdraw cash function 
To withdraw the cash, a void function named "withdrawCash" has been created. If the entered amount is greayer than the balance amount then "Insufficient Balance" message will be displayed or else the amount will be deducted from the balance and displays the new balance amount. This is done using 'If-else' statement.



