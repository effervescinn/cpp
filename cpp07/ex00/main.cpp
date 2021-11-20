#include "whatever.hpp"

// class Awesome
// {
// public:
// 	Awesome(void) : _n(0){};
// 	Awesome(int n) : _n(n){};
// 	Awesome &operator=(Awesome &a)
// 	{
// 		_n = a._n;
// 		return *this;
// 	};
// 	bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); };
// 	bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); };
// 	bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); };
// 	bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); };
// 	bool operator>=(Awesome const &rhs) const { return (this->_n > rhs._n); };
// 	bool operator<=(Awesome const &rhs) const { return (this->_n < rhs._n); };
// 	int get_n() const { return _n; };

// private:
// 	int _n;
// };

// std::ostream &operator<<(std::ostream &o, const Awesome &a)
// {
// 	o << a.get_n();
// 	return o;
// }

int main()
{
	//Simple types

	int a = 6;
	int b = 10;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "calling swap(a, b)..." << std::endl;
	swap(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;

	std::cout << "-----------------------" << std::endl;

	std::string str1 = "Peco";
	std::string str2 = "Smile";
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	std::cout << "calling swap(str1, str2)..." << std::endl;
	swap(str1, str2);
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	std::cout << "min: " << min(str1, str2) << std::endl;
	std::cout << "max: " << max(str1, str2) << std::endl;

	//Classes

	// Awesome a(2), b(4);
	// swap(a,b);
	// std::cout << a << " " << b << std::endl;
	// std:: cout << max(a,b) << std::endl;
	// std:: cout << min(a,b) << std::endl;

	return 0;
}
