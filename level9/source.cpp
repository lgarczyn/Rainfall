#include <cstring>

class Number
{
  private:
	int _n;
	char _annotation[100];
  public:
	Number(int n):_n(n) {}
	void setAnnotation(const char *str)
	{
		memcpy(_annotation, str, strlen(str));
	}
};


int main(void)
{
	
}