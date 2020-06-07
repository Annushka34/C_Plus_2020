#include"Calculator.h"
#include"Header.h"

template<typename T, typename A>
Calculator<T, A>::Calculator()
{

}

template<typename T, typename A>
Calculator<T, A>::Calculator(T x, A y)
{
	a = x;
	b = y;
}

template<typename T, typename A>
T Calculator<T, A>::Min()
{
	cout << a - b << endl;
}

template<typename T, typename A>
void Calculator<T, A>::Min(T x, A y)
{
	cout << x - y << endl;
}

template<typename T, typename A>
T Calculator<T, A>::Sum()
{
	cout << a + b << endl;
}

template<typename T, typename A>
void Calculator<T, A>::Sum(T x, A y)
{
	cout << x + y << endl;
}