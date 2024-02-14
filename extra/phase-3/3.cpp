#include <iostream>
#include <cctype>
using namespace std;

class Verification
{
private:
    string email;
    string password;
    bool isDeleted;

public:
    Verification(string email, string password) : email(email), password(password), isDeleted(false) {};

    bool Compare(string email, string password)
    {
        return this->email == email && this->password == password && !isDeleted;
    }

    void DeleteAccount()
    {
        isDeleted = true;
        cout << "Account deleted successfully." << endl;
    }

    bool IsDeleted() const
    {
        return isDeleted;
    }
};

bool ValidatePassword(string password)
{
    int hasUpperCase = 0,hasLowerCase = 0,hasDigit = 0, hasSpecialSymbol = 0;

    int i = 0;
    while (i < password.length()) 
    {
        char c = password[i];
        if (isupper(c))
            hasUpperCase = 1;
        else if (islower(c))
            hasLowerCase = 1;
        else if (isdigit(c))
            hasDigit = 1;
        else if (ispunct(c))
            hasSpecialSymbol = 1;
        i++;
    }

    return hasUpperCase && hasLowerCase && hasDigit && hasSpecialSymbol;
}

int main()
{
    string email, password, loginEmail, loginPassword;
    Verification v("", ""); 
    bool isAccountRegistered = false;

    do
    {
        cout << "Press 1 to Register....." << endl;
        cout << "Press 2 to Login....." << endl;
        cout << "Press 3 to Delete Account....." << endl;
        cout << "Press 0 to Exit The Program....." << endl;
        cout << "Enter Your Choice: ";
        int choice;
        cin >> choice;

        if (choice == 0)
        {
            break;
        }
        else
        {
            switch (choice)
            {
            case 1:
                cout << "Enter Your Email: ";
                cin >> email;
                cout << "Enter Your Password: ";
                cin >> password;
                if (!ValidatePassword(password))
                {
                    cout << "Password does not meet criteria." << endl;
                    break;
                }
                v = Verification(email, password);
                isAccountRegistered = true;
                cout << "Your Account Created Successfully......." << endl
                     << endl;
                break;

            case 2:
                if (!isAccountRegistered)
                {
                    cout << "No account registered yet." << endl;
                    break;
                }
                cout << "Enter Email: ";
                cin >> loginEmail;
                cout << "Enter Password: ";
                cin >> loginPassword;

                if (v.Compare(loginEmail, loginPassword))
                    cout << "Log-In Success." << endl;
                else
                    cout << "Log-in Failed." << endl;
                break;

            case 3:
                if (!isAccountRegistered)
                {
                    cout << "No account registered yet." << endl;
                    break;
                }
                v.DeleteAccount();
                isAccountRegistered = false;
                break;

            default:
                cout << "Invalid choice." << endl;
            }
        }
    } while (true);

    return 0;
}

