#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    char choise;
    
    cout << "Напишите первое число = ";
    cin >> a;
    cout << "Напишите первое число = ";
    cin >> b;
    
    cout << "Выберите +, -, *, /: ";
    cin >> choise;
    switch (choise)
    {
    case '+':
        cout << a + b;
    case '-':
        cout << a - b;
    case '*':
        cout << a + b;
    case '/':
        
        cout << a / b;
    default:
        break;
    }
}

