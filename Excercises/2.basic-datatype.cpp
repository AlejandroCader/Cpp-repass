#include <iostream>

using namespace std;

int main(void)
{
    int integer = 15;
    float floatnumber = 10.45;
    double mayor = 16.3456;
    char character = '1';
    string chain = "Hello";
    // you can use the 'using namespace std, to ommit the :: before each cout or cin command'
    // the + sign can be used to concat strings, but if you want to concat a number with an string
    // you just have to put the variable between the '<<' signs
    cout << chain + ", you are the client number " << character << ", your integer number is: " << integer << endl;
    cout << "Your float number is: " << floatnumber << " and last but not least, your double number: " << mayor << endl;
    return 0;
}