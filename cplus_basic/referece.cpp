#include <iostream>

int main()
{
	long ori = 10;
	long &ref = ori;
	long bb = 20;
	ref = bb;
	return 0;
}
