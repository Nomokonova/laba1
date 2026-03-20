#include <iostream>
#include <cmath>
using namespace std;

//вычисление периметра
	int perimetr(int sideA, int sideB, int sideC) {
		return (sideA + sideB + sideC);
	}

//вычисление площади
	double area(double sideA, double sideB, double sideC) {
		double polyperimetr = (sideA + sideB + sideC) / 2;
		return sqrt(polyperimetr * (polyperimetr - sideA) * (polyperimetr - sideB) * (polyperimetr - sideC));
	}
//проверка равнобедренности
	bool isos(int sideA, int sideB, int sideC) {
		return(sideA == sideB || sideA == sideC || sideB == sideC);
	}

//проверка существования треугольника
	bool exist(int sideA, int sideB, int sideC) {
		return (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA && sideA > 0 && sideB > 0 && sideC > 0);
	}


	int main() {
		setlocale(LC_ALL, "ru");

		//ввод сторон для треугольника
		int sideA, sideB, sideC;

		cout << "Введите три числа для сторон треугольника:" << endl;
		cin >> sideA >> sideB >> sideC;

		if (exist(sideA, sideB, sideC) == 0) {
			cout << "Треугольник не существует" << endl;
		}
		else {
			if (isos(sideA, sideB, sideC)) {
				cout << "треугольник равнобедренный\nпериметр равен\t" << perimetr(sideA,sideB,sideC) <<\
					"\nплощадь равна\t" << area(sideA,sideB,sideC) << endl;
			}
			else {
				cout << "треугольник не равнобедренный\nпериметр равен\t" << perimetr(sideA, sideB, sideC) <<\
					"\nплощадь равна\t" << area(sideA, sideB, sideC) << endl;
			}
		}
}//hhhhhhhhhhhh
