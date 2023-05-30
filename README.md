# Mini Bank

![Untitled design (1)](https://github.com/Anshul-V/Mini-Bank/assets/134433637/dd43850c-bb06-4084-b038-0c7b9b9ca4a2)

## Introduction
This code implements a simple ATM system using C++. It allows the user to access their account by entering their account number and password. Once logged in, the user can perform various actions such as  viewing user details, checking balance, withdrawing cash, depositing cash, and updating mobile number. The program uses a switch statement to perform different actions based on the user's choice. If the user chooses to exit, it displays a message "Thankyou! Have a good day." and terminates the program.

## Concepts used
* Classes and objects (OOPS)
* Control flow statements (If-else, switch)
* Basic arithmetic operations
* Input/Output operations (cin, cout) to prompt the users for input or to display the messages.

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
`Bank_account(int accNo, int pw, float bal, string mobileNo, string nm)`

### Check balance function :
To check the balance, a void function named "checkBalance" has been created which displays the balance money when selected.
`void checkBalance()`

### Withdraw cash function :
To withdraw the cash, a void function named "withdrawCash" has been created with argument amount of type float. If the entered amount is greater than the balance amount then "Insufficient Balance" message will be displayed or else the amount will be deducted from the balance and displays the new balance amount. This is done using 'If-else' statement.
`void withdrawCash(float amount)`

### Deposit cash function :
To deposit the cash, a void function named "depositCash" has been created with argument amount of type float. The user can enter the amount to be deposited and the balance will be updated. The new balance is displayed after depositing.
`void depositCash(float amount)`

### Display Details function :
To check the details like the name, mobile number, remaining balance, account number, a function of type void has been created, named "displayDetails".
`void displayDetails()`

### Updating mobile number :
To update the moblie number, a void function named "updateMobileNumber" has been created with argument newMobileNumber of string type and after updating it, the new mobile number will be displayed.
`void updateMobileNumber(string newMobileNumber)`

### Updating password :
To update the password, a void function named update password has been created with argument newPassword of integer type. After updating, the password is will be displayed.
`void updatePassword(int newPassword)`

### Authentication function :
A function named "authenticate" has been created with arguments account number and password which is used to verify with account number and password entered by the user.
`bool authenticate(int accNo, int pw)`

## Main Function
The main() function initializes five Bank account objects with different account details. It prompts the user to enter their account number and password, and checks if they are correct. If the credentials are correct, it allows the user to access their account and perform various actions such as checking balance, withdrawing cash, depositing cash, viewing user details, updating mobile number, updating password.
The program uses a switch statement to perform different actions based on the user's choice. The options are as follows:
1. Check balance
2. Withdraw cash
3. Deposit cash
4. View user details
5. Update mobile number
6. Update password
7. Exit

If the user enters an invalid option, it displays an error message "Invalid account number or password, Please try again." and prompts the user to enter again.

If the user chooses to check the balance, it calls the checkBalance() method of the corresponding bank_account object and displays the account balance.

If the user chooses to withdraw cash, it prompts the user to enter the amount to be withdrawn. If the amount is greater than the account balance, it displays an error message "Insufficient balance!." and prompts the user to enter again. Otherwise, it calls the cashWithdraw () method of the corresponding bank_account object and updates the account balance.

If the user chooses to deposit cash, it prompts the user to enter the amount to be deposited. It calls the cashDeposit() method of the corresponding bank_account object and updates the account balance.

If the user chooses to view user details, it calls the userDetails() method of the corresponding bank_account object and displays the account holder's details.

If the user chooses to update their mobile number, it prompts the user to enter their new mobile number. It calls the updateMobileNumber() method of the corresponding bank_account object and updates the mobile number.

If the user chooses to update their password, it prompts the user to enter their new password. It calls the updatePassword() method of the corresponding bank_account object and updates the password.

If the user chooses to exit, it displays the message "Thankyou, Have a good day." and terminates the program.

If any invalid choice is given, then it displays "Invalid choice" by default.








