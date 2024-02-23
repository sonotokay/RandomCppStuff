#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+'){
        cout << num1 + num2 << std::endl;
    } else if(op == '-'){
        cout << num1 - num2 << std::endl;
    } else if(op == '*'){
        cout << num1 * num2 << std::endl;
    } else if(op == '/'){
        cout << num1 / num2 << std::endl;
    } else {
        cout << "Invalid operator" << std::endl;
    }
    return 0;
}