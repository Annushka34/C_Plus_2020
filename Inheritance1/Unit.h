#pragma once
class Unit // interface
{
public:
	virtual void GetPersonCount() = 0;
};

class Student : public Unit
{

};
