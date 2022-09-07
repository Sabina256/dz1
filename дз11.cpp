#include <iostream>
#include <cmath>
using namespace std;

void dz1() {
    cout << "Сабина";
}


void dz2() {
    double x = 0;
    double y = 0;
    cout << "Введите x  ";
    cin >> x;
    cout << "Введите y  ";
    cin >> y;
    cout << "x + y = ";
    cout << x + y << endl;
    cout << "x - y = ";
    cout << x - y << endl;
    cout << "x * y = ";
    cout << x * y << endl;
    if (y != 0) {
        cout << "x / y = ";
        cout << x / y << endl;
    }
    else {
        cout << "Нельзя делить на 0" << endl;
    }
}


void dz3() {
    double b = 0;
    double c = 0;
    cout << "Уравнение вида bx + c = 0"<<endl;
    cout << "Введите b  ";
    cin >> b;
    cout << "Введите c  ";
    cin >> c;
    cout << "Ответ:"<<endl;
    if (b == 0 && c == 0) {
        cout << "Любое число";
    }
    else if (b == 0 && c != 0) {
        cout << "Нет решений";
    }
    else if (b != 0 && c == 0) {
        cout << "0";
    }
    else {
        cout << -c / b;
    }
}


void dz4() {
    double a = 0;
    double b = 0;
    double c = 0;
    double D = 0;
    cout << "Уравнение вида ax^2 + bx + c = 0"<<endl;
    cout << "Введите a  ";
    cin >> a;
    cout << "Введите b  ";
    cin >> b;
    cout << "Введите c  ";
    cin >> c;
    cout << "Ответ:"<<endl;
    if (a == 0) {
        if (b == 0 && c == 0) {
            cout << "Любое число";
        }
        else if (b == 0 && c != 0) {
            cout << "Нет решений";
        }
        else if (b != 0 && c == 0) {
            cout << "0";
        }
        else {
            cout << -c / b;
        }
    }

    else {

        D = pow(b, 2) - 4 * a * c;
        if (D > 0) {
            cout << "Корни:" << endl;
            cout << (((-b + sqrt(D)) / (2 * a))) << endl;
            cout << (((-b - sqrt(D)) / (2 * a)));
        }
        else if (D == 0) {
            cout << "Корень:" << endl;
            if ((-b / (2 * a)) != 0) {
                cout << (-b / (2 * a));
            }
            else {
                cout << 0;
            }

        }
        else {
            cout << "Нет корней";
        }
    }
}

void dz5() {
    int x;
    int y;
    int z;
    cout << "Какое сейчас время суток? (1-день, 0-вечер)" << endl;
    cin >> x;
    cout << "Открыты ли шторы? (1-да/0-нет)" << endl;
    cin >> y;
    cout << "Включена ли лампа? (1-да/0-нет)" << endl;
    cin >> z;
    if ((x == 1 && y == 1) || (z == 1)) {
        cout << "В комнате светло";
    }
    else {
        cout << "В комнате темно";
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    dz5();
}
