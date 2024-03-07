//Main program dependencies
#include <iostream>
#include <string>
using namespace std;
//Allows the user to restart the program
extern int main();
void restart()
{
    cout << "Continue? (y/n) ";
    char input;
    cin >> input;
    if (input == '\n' || input == 'y')
    {
        system("cls");
        main();
    }
}
int main()
{
    char op;
    float num1, num2;
    //Allows the user to enter operator i.e (+, -,*,/)
    cout<<"Masukan Operator: ";cin>>op;
    //Allows the user to enter Numbers for the operator to calculate
    cout<<"Masukan num1: ";cin>>num1;
    cout<<"Masukan num2: ";cin>>num2;
    //Switch Operator
    switch(op){
        case '+':
        //if user enter +
            cout <<"Hasil dari operator (+) : "<< num1 + num2<<endl;
            break;
        //if user enter -
        case '-':
            cout <<"Hasil dari operator (-) : "<< num1 - num2<<endl;
            break;
        //if user enter *
        case '*':
            cout <<"Hasil dari operator (*) : "<< num1 * num2<<endl;
            break;
        // If user enter /
        case '/':
            cout <<"Hasil dari operator (/) : "<< num1 / num2<<endl;
            break;
        // If the operator is other than +, -, * or /,
        // error message will display
        default:
            cout << "Error! operator is not correct";
    }//Switch Statement Ends
    //Calling the restart Function
    restart();
    return 0;
}
