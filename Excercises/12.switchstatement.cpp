#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cout << "Hello again, now we are going to use the switch statement\n"
         << endl;
    cout << "Insert any number between 1 and 5\n"
         << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "The number you picked is 1" << endl;
        break;
    case 2:
        cout << "The number you picked is 2" << endl;
        break;
    case 3:
        cout << "The number you picked is 3" << endl;
        break;
    case 4:
        cout << "The number you picked is 4" << endl;
        break;
    case 5:
        cout << "The number you picked is 5" << endl;
        break;
    default:
        cout << "The number you picked is not in the 1 to 5 range" << endl;
        break;
    }
}