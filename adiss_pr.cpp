#include<iostream>
#include<cmath>
using namespace std;

double Perimetr (double a, double b);
double Ploshad (double a, double b);
double Diagonal (double a, double b);

int main(){
    double a, b;
    cout<<"\nВведите длину прямоугольника\n";
    cin >> a;
    cout<<"\nВведите ширину прямоугольника\n";
    cin >> b;

    if (a<=0 || b<=0){
        cout<<"\nЗначения должны быть положительными!\n";
        return 1;
    }
    cout<<"\nПериметр: "<<Perimetr(a, b);
    cout<<"\nПлощадь: "<<Ploshad(a, b);
    cout<<"\nДлина диагонали: "<<Diagonal(a, b)<<"\n";

    return 0;
}
double Perimetr(double a, double b){
    return 2 * (a + b);
}

double Ploshad (double a, double b){
    return (a*b);
}

double Diagonal (double a, double b){
    return sqrt(a*a + b*b);
}
