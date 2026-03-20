// Программа для вычисления параметров трапеции
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;
    
    cout << "Введите первое основание: ";
    cin >> a;
    cout << "Введите второе основание: ";
    cin >> b;
    cout << "Введите первую боковую сторону: ";
    cin >> c;
    cout << "Введите вторую боковую сторону: ";
    cin >> d;
    
    // Проверка: все стороны должны быть положительными
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        cout << "Ошибка: все стороны должны быть положительными" << endl;
        return 1;
    }
    
    // Проверка существования трапеции
    double diff = abs(a - b);
    if (diff >= c + d) {
        cout << "Ошибка: такой трапеции не существует" << endl;
        return 1;
    }
    
    // Вычисление высоты по теореме Пифагора
    double x = (diff * diff + c * c - d * d) / (2 * diff);
    double h = sqrt(c * c - x * x);
    
    double perimeter = a + b + c + d; //ggggg
    double area = (a + b) * h / 2;
    double midline = (a + b) / 2;//aAAAAAAAAgit ad
    
    cout << "\nРезультаты:" << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Средняя линия: " << midline << endl;
    
    return 0;
}
//djsegbwkjsdyt6cdew,jiu89dfswqjkslwqgncjdgdsmajekrhurjel