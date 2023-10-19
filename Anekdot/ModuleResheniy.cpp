// author Evgeniy Afanasev
// Zadacha 1;

#include <math.h>

// вычисляет разность модулей и их
float Reshenie (int x, int y) 

{
	// сумма модулей х и у делится на модуль произведение х и у 
	return (abs(x) - abs(y)) / (1.0 + abs(x*y));
}