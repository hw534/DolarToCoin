// DolarToCoin.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

double dolarToCent(double dolar) {
    return dolar * 100;
}

double dolarToPenny(double dolar) {
    return dolar * 100;
}

double dolarToNickel(double dolar) {
    return dolarToPenny(dolar)/5;
}

double dolarToDime(double dolar) {
    return dolarToPenny(dolar) / 10;
}

double dolarToQuarter(double dolar) {
    return dolarToPenny(dolar) / 25;
}

void clearConsole() {
    system("CLS");
}

void init() {
    cout << "Enter the value in dollars to convert:" << endl;
    double dollars;
    cin >> dollars;
    clearConsole();

    cout << dollars << " dollars is equal to: \n" <<
        dolarToCent(dollars) << " cents \n" <<
        dolarToDime(dollars) << " dimes \n" <<
        dolarToNickel(dollars) << " nickels \n" <<
        dolarToPenny(dollars) << " pennies \n" <<
        dolarToQuarter(dollars) << " quarters \n" << endl;
}

int main()
{
    init();
    while (true) {
        int input;
        cout << "Select an action: \n 1 - Convert again \n 2 - Exit " << endl;
        cin >> input;
        if (input == 1) {
            clearConsole();
            init();
        }
        else {
            clearConsole();
            break;
        }
    }
}
