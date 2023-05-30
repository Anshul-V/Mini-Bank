#include <iostream>
#include <string>
using namespace std;

class Bank_account          // Creating a class named Bank_account
{
private:                   
    int accountNumber;     // Private members
    int password;
    float balance;
    string mobileNumber;

public:
    string name;           // Public member
    Bank_account(int accNo, int pw, float bal, string mobileNo, string nm)       // Constructor
    {
        accountNumber = accNo;
        password = pw;
        balance = bal;
        mobileNumber = mobileNo;
        name = nm;
    }
    void checkBalance()           // Function created to check the balance
    {
        cout << "Your account balance is: " << balance << endl;
    }
    void withdrawCash(float amount)          // Function created to withdraw the cash
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "You have withdrawn " << amount << ".\nYour new balance is: " << balance << endl;
        }
    }
    void depositCash(float amount)              // Function created to deposit the cash
    {
        balance += amount;
        cout << "You have deposited " << amount << ".\nYour new balance is: " << balance << endl;
    }
    void displayDetails()               // Function created to display the details
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Balance: " << balance << endl;
    }
    void updateMobileNumber(string newMobileNumber)          // Function created to update mobile number
    {
        mobileNumber = newMobileNumber;
        cout << "Your mobile number has been updated to: " << mobileNumber << endl;
    }
    void updatePassword(int newPassword)             // Function created to update password
    {
        password = newPassword;
        cout << "Your password has been updated to: " << password << endl;
    }
    bool authenticate(int accNo, int pw)            // Verifies the acc no and password with the user input
    {
        return (accountNumber == accNo && password == pw);
    }
};

int main()
{
    Bank_account accounts[5] = {Bank_account(123789, 1212, 15000, "1234567809", "Ram"),
                                Bank_account(987321, 2323, 10000, "2345678091", "Sanjay"),
                                Bank_account(217398, 3434, 12000, "3456780912", "Ravi"),
                                Bank_account(893712, 4545, 11000, "4567809123", "Surya"),
                                Bank_account(192837, 5656, 9000, "5678091234", "Abhiram")};      // 5 users
    int accountNumber, password, choice;
    float amount;
    string newMobileNumber;
    int newPassword;

    cout << "\nWelcome to BVIT (Bank of VIT)\n"
         << endl;
    cout << "-----------------------------\n"
         << endl;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < 5; i++)
    {
        if (accounts[i].authenticate(accountNumber, password))
        {
            cout << "\nWelcome, " << accounts[i].name << "!\n"
                 << endl;

            while (true)
            {
                cout << "\nEnter your choice:\n1. Check Balance\n2. Withdraw Cash\n3. Deposit Cash\n4. Display Details\n5. Update Mobile Number\n6. Update Password\n7. Exit" << endl;
                cin >> choice;

                switch (choice)
                {
                case 1:
                    accounts[i].checkBalance();
                    break;
                case 2:
                    cout << "Enter the amount to withdraw: ";
                    cin >> amount;
                    accounts[i].withdrawCash(amount);
                    break;
                case 3:
                    cout << "Enter the amount to deposit: ";
                    cin >> amount;
                    accounts[i].depositCash(amount);
                    break;
                case 4:
                    accounts[i].displayDetails();
                    break;
                case 5:
                    cout << "Enter the new mobile number: ";
                    cin >> newMobileNumber;
                    accounts[i].updateMobileNumber(newMobileNumber);
                    break;
                case 6:
                    cout << "Enter the new password: ";
                    cin >> newPassword;
                    accounts[i].updatePassword(newPassword);
                    break;
                case 7:
                    cout << "Thankyou\nHave a great day!" << endl;
                    exit(0);
                default:
                    cout << "Invalid choice" << endl;
                }
            }
        }
    }

    cout << "Invalid account number or password!!" << endl;
    cout << "Please try again" << endl;

    return 0;
}
