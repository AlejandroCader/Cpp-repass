#include <iostream>
using namespace std;

int main(void)
{
    float a, b, c, d, e, f, result = 0;
    cout << "Hello again, today the programm will resolve\nany problem of the expression (a+(b/c))/(d+(e/f))" << endl;
    cout << "Insert the value of a ";
    cin >> a;
    cout << "Insert the value of b ";
    cin >> b;
    cout << "Insert the value of c ";
    cin >> c;
    cout << "Insert the value of d ";
    cin >> d;
    cout << "Insert the value of e ";
    cin >> e;
    cout << "Insert the value of f ";
    cin >> f;

    result = (a + (b / c)) / (d + (e / f));

    cout.precision(2);
    cout << "\nThe result of the expression is: " << result << endl;
}