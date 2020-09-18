#include <iostream>
using namespace std;

int main(void)
{

    float practic, teoric, participative;
    int finalgrade;

    cout << "Hello, this is a programm that will calculate the percentage of your grades" << endl;
    cout << "Insert your practical grade: ";
    cin >> practic;
    cout << "Insert your teorical grade: ";
    cin >> teoric;
    cout << "Insert your participatory grade: ";
    cin >> participative;

    practic = practic * 0.30;
    teoric = teoric * 0.60;
    participative = participative * 0.10;

    finalgrade = practic + teoric + participative;

    cout << "Your final grade is: " << finalgrade << endl;
    return 0;
}