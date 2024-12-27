#include <iostream>
#include <cmath> // Для використання математичних функцій

using namespace std;

// Декларація функції
double TriangleP(double a, double h);

// Головна функція
int main() {
    // Змінні для основ і висот трьох трикутників
    double a1, h1, a2, h2, a3, h3;

    // Введення даних для трьох трикутників
    cout << "Vvedite osnovaniye i vysotu dlya pervogo treugolnika: ";
    cin >> a1 >> h1;

    cout << "Vvedite osnovaniye i vysotu dlya vtorogo treugolnika: ";
    cin >> a2 >> h2;

    cout << "Vvedite osnovaniye i vysotu dlya tretyego treugolnika: ";
    cin >> a3 >> h3;

    // Обчислення периметрів
    double p1 = TriangleP(a1, h1);
    double p2 = TriangleP(a2, h2);
    double p3 = TriangleP(a3, h3);

    // Виведення результатів
    cout << "Perimetr pervogo treugolnika: " << p1 << endl;
    cout << "Perimetr vtorogo treugolnika: " << p2 << endl;
    cout << "Perimetr tretyego treugolnika: " << p3 << endl;

    return 0;
}

// Визначення функції
double TriangleP(double a, double h) {
    // Обчислення сторони b за теоремою Піфагора
    double b = sqrt(pow(a / 2, 2) + pow(h, 2));

    // Периметр рівнобедреного трикутника
    return a + 2 * b;
}