#include <iostream>
using namespace std;

int main(){
    string choice;
    double fahrenheit, celsius;
    cout << "Enter 'f' to convert Fahrenheit to Celsius or 'c' to convert Celsius to Fahrenheit: ";
    cin >> choice;
    if ( choice == "f" || choice == "F")
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit-32) * 5/9;
        cout << "Temperature in Celsius: " << celsius << std::endl;
    }
    else if (choice == "c" || choice == "C")
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
    }
    else
    {
        cout << "Invalid choice" << std::endl;
    }
    return 0;
}