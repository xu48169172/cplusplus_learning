#include <iostream>
#include <cstring>
#include <array>
int main()
{
	std::array<int,10> temp;
	for (std::int32_t i=0;i<10;i++)
		temp.at(i) = i+1;
	std::cout << "temp contains:";
	// return a reference to the element at position i in the array
	for (std::int32_t i=0;i<10;i++)
		std::cout << " " << temp.at(i);
	std::cout << std::endl;

	// return a reference to the first element in the array container
	std::cout << "temp first element:" << temp.front() << std::endl;

	// return a reference to the last element in the arrsy container
	std::cout << "temp last element:" << temp.back() << std::endl;
	
	temp.front() = 10;
	temp.back() = 50;

	std::cout << "temp first element:" << temp.front() << std::endl;
	std::cout << "temp last element:" << temp.back() << std::endl;

	// returns an iterator pointing to the first element int array container	
	for (auto it=temp.begin(); it != temp.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;

	// returns a const_iterator pointing to the first element int the array container
	for (auto it=temp.cbegin(); it != temp.cend(); it++)
		std::cout << " " << *it;  //can't modify *it
	std::cout << std::endl;

	std::cout << temp.data()<< std::endl;
	// returns a pointer to the first element int the array object
	const char* cstr = "This is a test";
	std::array<char,20> chararray;
	std::memcpy(chararray.data(),cstr,20);
	std::cout << chararray.data()<<std::endl;

	// returns a bool value indicating whether the array container is empty. i.e. whether its size is 0
	std::array<int,0> emptyarray;

	std::cout << "the emptyarray:" <<(emptyarray.empty() ? "is empty" : "is not empty") << std::endl;

	// sets val ad the value for all the elements int the array object
	std::array<int,10> myarray;
	myarray.fill(20);
	// myarray containers:
	for (auto& x:myarray) {
		std::cout << " " << x;
	}
	std::cout << std::endl;
	// returns the maximum size of elements that the array container can hold
	std::cout << "myarray size:" << myarray.size() << std::endl;
	std::cout << "myarray max size:" << myarray.max_size() << std::endl;


	// operator[] returns a reference to the element at positon n in the array container
	for (std::int32_t i = 0;i<10;i++)
		myarray[i] = i+10;
	std::cout << "use operator[] out:";

	for (std::int32_t i = 0;i<10;i++)
		std::cout << " " << myarray[i];
	std::cout << std::endl;

	// rbegin: return reverse iterator to reverse beginning
	// rend :  return reverse iterator to reverse end
	std::cout << "reverse output container:";	
	for (auto rit=myarray.rbegin();rit < myarray.rend();rit++)
		std::cout << " " << *rit;
	std::cout << std::endl;

	// swap: exchange the content of the array by the content x, which is another array object of the same type
	
	std::array<int,5> first = {1,2,3,4,5};
	std::array<int,5> second = {6,7,8,9,10};
	first.swap(second);

	std::cout << "first:";
	for(int& x:first)
		std::cout << " " << x;
	std::cout << std::endl;
	std::cout << "second:";
	for (int& x:second)
		std::cout << " " << x;
	std::cout << std::endl;
	std::cout << "Hello world" << std::endl;
}
