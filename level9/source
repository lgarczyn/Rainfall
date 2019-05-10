#include <cstring>
#include <cstdlib>

class Number
{
  private:
	char _annotation[100];
	int _n;
  public:
	Number(int n):_n(n) {}
	void setAnnotation(const char *str)
	{
		memcpy(_annotation, str, strlen(str));
	}
	int operator+(Number& arg)
	{
		return (this->_n + arg._n);
	}
	int operator-(Number& arg)
	{
		return (this->_n - arg._n);
	}
};

int main(int ac, char **av)
{
	if (ac != 2)	
		std::exit(1);
	Number *num1 = new Number(5);
	Number *num2 = new Number(6);
	num1->setAnnotation(av[1]);
	return (*num1 + *num2);
}
