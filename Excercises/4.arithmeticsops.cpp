#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2, add = 0, substract = 0, product = 0, division = 0;
    cout << "Insert two numbers, the programm will make the basic arithmetics operations \n such as addition, substraction, multiplication and division" << endl;
    cin >> num1 >> num2;
    //You can do the basic arithmetics with the "+" "-" "*" "/" signs
    add = num1 + num2;
    substract = num1 - num2;
    product = num1 * num2;
    division = num1 / num2;

    cout << "The result of the addition is: " << add << endl;
    cout << "The result of the substraction is: " << substract << endl;
    cout << "The result of the multiplication is: " << product << endl;
    cout << "The result of the division is: " << division << endl;
    return 0;
}