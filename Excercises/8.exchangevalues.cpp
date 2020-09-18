#include <iostream>
using namespace std;

int main(void)
{
    int x, y, aux;
    cout << "Insert an x value: ";
    cin >> x;
    cout << "Insert an y value: ";
    cin >> y;

    aux = x; // We need the auxiliar variable to keep the x value in it
    x = y;   // Then we save in the x variable the value that y has
    y = aux; // Finally we put the saved value in the aux variable in the y variable

    cout << "The new value of x is: " << x << " and the new value of y is: " << y << endl;
    return 0;
}
