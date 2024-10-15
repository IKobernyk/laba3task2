#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    // Вводимо x
    double x;
    cout << "Enter x: ";
    cin >> x;

    // Перевірка, чи x > 0, оскільки логарифм і кубічний корінь визначені тільки для додатних значень
    if (x <= 0) {
        cout << "Error: x must be greater than 0." << endl;
        return 1;
    }

    // Обчислення частин виразу
    double ch1 = log(x * x) + 2 * pow(cos(x), 2);  // ln(x^2) + 2 * cos^2(x)
    double zn1 = pow(cos(2 * x), 2);               // cos^2(2x)
    double fraction1 = ch1 / zn1;                  // Перша частина дробу

    double fraction2 = cbrt(x) / x;                // Друга частина дробу (корінь кубічний з x / x)

    // Загальний результат
    double y = fraction1 + fraction2;

    // Виведення результату
    cout << "y = " << y << endl;

    return 0;
}