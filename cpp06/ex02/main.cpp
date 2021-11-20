#include <cstdlib>
#include <iostream>

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
	srand(time(0));
	int ret = rand() % 3 + 1;
	switch (ret)
	{
	case (1):
		return new A();
	case (2):
		return new B();
	case (3):
		return new C();
	}
	return new A();
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else
		std::cout << "C\n";
}

void identify(Base &p)
{
	try
	{
		A &check = dynamic_cast<A &>(p);
		(void)check;
		std::cout << "A\n";
	}
	catch (const std::bad_cast &bc)
	{
		try
		{
			B &check = dynamic_cast<B &>(p);
			(void)check;
			std::cout << "B\n";
		}
		catch (const std::bad_cast &bc)
		{
			std::cout << "C\n";
		}
	}
}

int main()
{
	Base *parent = generate();
	identify(*parent);
	// identify(parent);
	return 0;
}
