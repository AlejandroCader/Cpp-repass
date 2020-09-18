#include <iostream>
using namespace std;

int main(void)
{

    int num, data = 5;
    cout << "\n\nHello again, this programm will tell you wether your number\nis higher or lower than 5\n"
         << endl;
    cout << "Insert any number you want: " << endl;
    cin >> num;

    if (num < data)
    {
        cout << "Your number is lower than " << data << endl;
    }
    else if (num > data)
    {
        cout << "Your number is higher than " << data << endl;
    }
    else
    {
        cout << "Your number is equal to " << data << endl;
    }
}