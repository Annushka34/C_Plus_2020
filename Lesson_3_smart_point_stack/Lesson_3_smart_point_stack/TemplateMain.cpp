#include"Header.h"
#include"Calculator.h"

void main()
{
	//Calculator calc(5.5,10);
	Calculator<double, int> calc(5.5, 10);
	calc.Sum();
}