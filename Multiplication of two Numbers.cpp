#include <iostream>
using namespace std;
int main()
{
    double num1, num2, product;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number:";
    cin >>  num2;

    product = num1*num2;
    cout<<"The product of "<<num1<<" and "<<num2<<" is : "<<product<<endl;
    
    return 0;
}