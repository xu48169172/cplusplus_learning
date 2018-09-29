#include <iostream>
#include <vector>
int main()
{
	std::vector<int> myvector(10);
	// return vector size 
	std::cout << "myvector size:" << myvector.size() << std::endl;
	//assign vector content
	//assigns new contents to the vector, replacing its current contents,and modifying its size accordingly
	std::vector<int> first;
	std::vector<int> second;
	std::vector<int> third;

	first.assign(7,100);
	std::cout << "first vector size:" << first.size() << std::endl;

	std::vector<int>::iterator it;
	it = first.begin() + 1;
	second.assign(it, first.end()-1);
	std::cout << "second vector size:" << second.size() << std::endl;

	std::int32_t myints[] = {132,134, 135};
	third.assign(myints,myints+3);
	std::cout << "third vector size:" << third.size() << std::endl;

	std::cout << "initial contents in myvector:" << std::endl;
	for (std::int32_t i=0;i<myvector.size();i++)
		std::cout << " " << myvector.at(i);
	std::cout << std::endl;
	for (std::int32_t i=0;i<myvector.size();i++)
		myvector.at(i) = i;

	std::cout << "after at method contents in myvector:" << std::endl;
	for (std::int32_t i=0;i<myvector.size();i++)
		std::cout << " " << myvector.at(i);
	std::cout << std::endl;
	std::cout << "Hello cplusplus vector" << std::endl;

	// std::vector::back access last element
	// returns a reference to the last element in the vector
	// unlike member vector::end, which returns an iterator just past this element, this function returns a direct reference.
	// std::vector::push_back add new element at the end of the vector, after its current last element, the content of val is copied to the new element.
	// std::vector::operator[] returns a reference to the element at position n in the vector container.
	// a similar member function ,vector::at has the same behavior at this operator function, except that vector::at is bound-checked and signals if the requested positon is out of range by throwing an out_of_range exception.
	
	std::vector<int> myvector1;
	myvector1.push_back(10);
	while (myvector1.back() != 0) {
		myvector1.push_back(myvector1.back() - 1);
	}
	std::cout << "myvector1 contents:";
	for (std::int32_t i=0;i<myvector1.size();i++)
		std::cout << " " << myvector1[i];
	std::cout << std::endl;

	// std:vector::begin,return iterator to beginning, returns an iterator pointing to the first element in the vector
	// Notice that, unlike member vector::front, which returns a reference to the first element,this function returns a random access iterator pointing to it
	// std::vector::end returns an iterator referring to the past-the-end in the vector container
	// the past-the-end element is the theoretical element that would follow the last element in the vector. it does not point to any element, and thus shall not be dereferenced.
	std::vector<int> mv;
	for (std::int32_t i=0;i<5;i++)
		mv.push_back(i);
	std::cout << "mv contains:";
	for (std::vector<int>::iterator it = mv.begin();it != mv.end();it++)
		std::cout << " " << *it;
	std::cout << std::endl;

	// std::vector::capacity return size of allocated storage capacity
	// returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
	// this capacity is not necessarily  equal to the vector size, it can be equal or greater, with the extra space allowing to accommodate for growth without to reallocate on each insertion
	// the theoretical limit on the size of a vector is given by member max_size.
	std::cout << "size:" << myvector.size()<<std::endl;
	std::cout << "capacity:" << myvector.capacity()<<std::endl;
	std::cout << "max size:" << myvector.max_size()<<std::endl;

	// std::vector::cbegin return const_iterator to beginning
	// std::vector::cend  returns a const_iterator pointing to the past-the-end element in the container
	// std::vector::clear remove all elements from the vector,leaving the  container with a size of 0
	// std::vector::crbegin returns a const_reverse_iterator pointing to the last element in the container
	// std::vector::crend returns a const_reverse_iterator pointing to the theoretical preceding the first element in the container
	// std::vector::data returns a direct pointer to the memory array used internally by the vector to store its owned elements.
	// std::vector::emplace, the container is extended by inserting a new element at position. this new element is constructed in place using args as the arguments for its construction.
	// std::vector::emplace_back inserts a new element at the end of the vector, right after its current last element. this new element is constructed in place using args as the arguments for its constructor.
	// std::vector::empty, returns whether the vector is empty
	// std::vector::end, returns an iterator referring to the past-the-end element in the vector container.
	// std::vector::erase removes from the vector either a single element or a range of elements([first,last])
	// std::vector::front returns a reference to the first element in the vector
	// std::vector::insert the vector is extended by inserting new elements before the element at the specified position,effectively increasing the container size by the number of elements inserted.
	// std::vector::operator=,assign new contents to the container, replacing its current contents, and modifying its size accordingly.
	// std::vector::operator[],returns a reference to the element at position n in the vector container
	// std::vector::pop_back, removes the last element in the vector, effectively resucing the container size by one.
	// std::vector::push_back, adds a new element at the end of the vector, after its current last element, the content of val is copied to the new element.
	// std::vector::rbegin,return reverse iterator to reverse beginning
	// std::vector::rend,return reverse iterator to reverse end
	// std::vector::reserve, request a change in capacity
	// std::vector::resize, resizes the container so that it contains n elements
	// std::vector::shrink_to_fit, requests the container to reduce its capacity to fit its size.
	// std::vector::size, returns the number of elements in the vector
	//
}
