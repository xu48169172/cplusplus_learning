#include <iostream>
#include <array>

int main()
{
	std::array<int,10> a;
	for(int i=0;i<10;i++)
		a[i] = i;

	for(int i=0;i<10;i++)
		std::cout << "a["<<i<<"]:"<<a[i]<<std::endl;

	std::cout << "Hello array" << std::endl;
	return 0;
}
