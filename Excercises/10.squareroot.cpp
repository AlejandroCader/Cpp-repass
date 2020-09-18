#include <iostream>
#include <math.h>
// You can use the math.h library to use commans such as "sqrt" or  "pow"
using namespace std;

int main(void)
{
    float x, y, result = 0;
    cout << "Hello again, today we are going to calculate the next expression: " << endl;
    cout << "f(x,y) = sqrt(x) / (pow(y,2)-1)" << endl;
    cout << "Insert an x value: ";
    cin >> x;
    cout << "Insert an y value: ";
    cin >> y;

    result = sqrt(x) / (pow(y, 2) - 1);
    cout << "\nThe result of the expression is: " << result << endl;
    return 0;
}