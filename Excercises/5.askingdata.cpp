#include <iostream>
using namespace std;

int main(void)
{
    int age = 0;
    float height = 0;
    string gender, name;
    cout << "Hello again!" << endl;
    cout << "Insert your name" << endl;
    cin >> name;
    cout << "Insert your age" << endl;
    cin >> age;
    cout << "Insert your gender (male, female, other)" << endl;
    cin >> gender;
    cout << "Insert your height in meters" << endl;
    cin >> height;

    if (gender == "male")
    {
        cout << "Hello Mr. " + name + "." << endl;
        cout << "We are happy to have you here, your age is: " << age << " and your height is: " << height << endl;
    }
    else if (gender == "female")
    {
        cout << "Hello Ms. " + name + "." << endl;
        cout << "We are happy to have you here, your age is: " << age << " and your height is: " << height << endl;
    }
    else
    {
        cout << "Hello " + name + "." << endl;
        cout << "We are happy to have you here, your age is: " << age << " and your height is: " << height << endl;
    }

    return 0;
}