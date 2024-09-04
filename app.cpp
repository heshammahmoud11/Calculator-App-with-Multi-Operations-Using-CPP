#include <iostream>
#include<cstring>
using namespace std;

// -------- Multi Calculator App --------------
void mathInput(struct mathOperation obj1);
void stringInput(struct stringOperation obj2);

struct mathOperation
{
    float firstNum;
    float secondNum;
    int mathChoice;

    void sum()
    {
        
        cout << "The Result of " << firstNum << " + " << secondNum << " = " << firstNum + secondNum <<endl;
        cout << "------------------\n";
    }
    void sub()
    {
        cout << "The Result of " << firstNum << " - " << secondNum << " = " << firstNum - secondNum <<endl;
        cout << "------------------\n";
    }
    void mult()
    {
        cout << "The Result of " << firstNum << " * " << secondNum << " = " << firstNum * secondNum <<endl;
        cout << "------------------\n";
    }
    void div()
    {
        cout << "The Result of " << firstNum << " / " << secondNum << " = " << firstNum / secondNum <<endl;
        cout << "------------------\n";
    }
};
struct stringOperation
{
    string firstString, secondString ;
    int stringChoice;

    void addString()
    {
        cout << "The Total Text is: " << firstString + " " +secondString << endl;
        cout << "---------------------\n";
    }
    void compareString()
    {
        if(firstString.length() == secondString.length())
        {
            if(firstString == secondString)
            {
                cout << "Two Strings Are Same\n";
            }
            else
            {
                cout << "Two String Are Different\n";
                cout << "------------------\n";
                for (int i = 0; i < firstString.length(); i++)
                {
                    if(firstString[i] != secondString[i])
                    {
                        cout << "The " << i + 1 << " Chars is different :"
                        << firstString[i] << " != " << secondString[i] << endl;
                        cout << "------------------\n";
                    }
                    else
                    {
                        cout << "The " << i + 1 << " Chars is Same :"
                        << firstString[i] << " == " << secondString[i] << endl;
                        cout << "------------------\n";
                    }
                }
            }
        }
        else
        {
            cout << "Two Strings Different in Length\n";
        }
    }
};

int main()
{
    struct mathOperation obj1;
    struct stringOperation obj2;
    int choice;
    do
    {        
        start:
        cout << "Enter The Mode You Want\n";
        cout << "1- Math Process\n";
        cout << "2- String Process\n";
        cout << "3- Exit\n";
        cout << "-------------------\n"; 
        cin >> choice;
        switch(choice)
        {
            case 1:
                mathInput( obj1);
                break;
            case 2:
                stringInput( obj2);
                break;
            case 3:
                cout <<"Happy Operations\n";
                exit(0);
                break;
            default:
                cout << "Enter a Valid Number\n";
                goto start;
        }
    } while (choice != 3);
    
}

void mathInput(struct mathOperation  obj)
{
    start:
    cout << "Enter the First Number: ";
    cin >> obj.firstNum;
    cout << "Enter The Second Number: ";
    cin >> obj.secondNum;
    cout << "--------------\n";
    do{
        inputPlace:
        cout << "The Operations Available Are: \n";
        cout << "1- Sumation\n";
        cout << "2- Subtraction\n";
        cout << "3- Multiplicaiton\n";
        cout << "4- Division\n";
        cout << "5- Enter New Numbers\n";
        cout << "6- Back To The Main Page\n";
        cout << "Choose Your Operation: ";
        cin >> obj.mathChoice;
        switch(obj.mathChoice)
        {
            case 1:
                obj.sum();
                break;
            case 2:
                obj.sub();
                break;
            case 3:
                obj.mult();
                break;
            case 4:
                obj.div(); 
                break;
            case 5:
                goto start;
                break;
            case 6:
                break;
            default: 
                cout << "Enter A Valid Number\n";
                goto inputPlace;
        }
    }while(obj.mathChoice != 6);
}

void stringInput(struct stringOperation  obj)
{
        start:
        cout << "Enter the First String: ";
        cin >> obj.firstString;
        cout << "Enter The Second String: ";
        cin >> obj.secondString;
        cout << "--------------\n";
    do
    {
        inputPlace:
        cout << "The Operations Available Are: \n";
        cout << "1- Add Two Strings\n";
        cout << "2- Compare Two Strings\n";
        cout << "3- Enter New Strings\n";
        cout << "4- Back To The Main Page\n";
        cout << "Choose Your Operation: ";
        cin >> obj.stringChoice;
        switch(obj.stringChoice)
        {
            case 1:
                obj.addString();
                break;
            case 2:
                obj.compareString();
                break;
            case 3:
                goto start;
                break;
            case 4:
                break;
            default : 
                cout << "Enter A Valid Number\n";
                goto inputPlace;
        }
    } while (obj.stringChoice != 4);
}
