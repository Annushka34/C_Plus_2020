#pragma once

template<typename T, typename A>
class Calculator
{
	T a;
	A b;
public:
	Calculator();
	Calculator(T x, A y);

	T Sum();
	T Min();
	void Sum(T x, A y);
	void Min(T x, A y);
};
