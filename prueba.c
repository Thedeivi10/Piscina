#include <unistd.h>

int main(void)
{
	write(1, "Hello World", 11);
	return 0;
}
