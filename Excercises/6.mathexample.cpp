#include <iostream>
using namespace std;

int main(void)
{
    float a, b, result = 0;
    cout << "Hello again, today the programm will resolve\nany problem of the expression (a/b) + 1" << endl;
    cout << "Insert the value of a ";
    cin >> a;
    cout << "Insert the value of b ";
    cin >> b;

    result = (a / b) + 1;

    cout.precision(2);
    cout << "\nThe result of the expression is: " << result << endl;
}