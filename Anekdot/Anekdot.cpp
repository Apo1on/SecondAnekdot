// author Evgeniy Afanasev
#include <iostream>				// модуль вывода
#include <clocale>				// модуль перевода
#include <cassert>				// модуль проверки
#include <cmath>
#include "ModuleResheniy.h"		// мой модуль с решением
using namespace std;			// пространство имен


// главный исполняемый 
int main() {
	int x, y;
	setlocale(LC_ALL, "Russian"); // выставляет язык на русский
	assert(Reshenie(5, 4) - 0.047619 < 0.0000005);
	assert(Reshenie(3, 3) == 0);
	assert(abs(Reshenie(2, 5) - -0.272727) < 0.0000005);
	// ввод Х
	cout << "Введите X:";
	cin >> x;
	cout << endl;

	// ввод У
	cout << "Введите Y:";
	cin >> y;
	cout << endl;

	// вывод результа
	cout << Reshenie(x, y) << endl;

}