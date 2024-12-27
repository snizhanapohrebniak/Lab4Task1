#include <iostream>
#include <cmath> // ��� ������������ ������������ �������

using namespace std;

// ���������� �������
double TriangleP(double a, double h);

// ������� �������
int main() {
    // ���� ��� ����� � ����� ����� ����������
    double a1, h1, a2, h2, a3, h3;

    // �������� ����� ��� ����� ����������
    cout << "Vvedite osnovaniye i vysotu dlya pervogo treugolnika: ";
    cin >> a1 >> h1;

    cout << "Vvedite osnovaniye i vysotu dlya vtorogo treugolnika: ";
    cin >> a2 >> h2;

    cout << "Vvedite osnovaniye i vysotu dlya tretyego treugolnika: ";
    cin >> a3 >> h3;

    // ���������� ���������
    double p1 = TriangleP(a1, h1);
    double p2 = TriangleP(a2, h2);
    double p3 = TriangleP(a3, h3);

    // ��������� ����������
    cout << "Perimetr pervogo treugolnika: " << p1 << endl;
    cout << "Perimetr vtorogo treugolnika: " << p2 << endl;
    cout << "Perimetr tretyego treugolnika: " << p3 << endl;

    return 0;
}

// ���������� �������
double TriangleP(double a, double h) {
    // ���������� ������� b �� �������� ϳ������
    double b = sqrt(pow(a / 2, 2) + pow(h, 2));

    // �������� ������������� ����������
    return a + 2 * b;
}