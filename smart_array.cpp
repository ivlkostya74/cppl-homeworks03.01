#include <iostream>
#include <sstream>
#include "smart_array.h"
#include "Error.h"


smart_array::smart_array(int i) {
	it = new int[i]();
	now_size = 0;
	full_size = i;
}
int smart_array::add_element(int i) {
	if (now_size >= full_size)
	{
		std::stringstream message;
			message << " Необходимо увеличить размер умного массива для добавления элементов!\n";
			throw ArrayException(message.str());
		}
		*(it+now_size)=i;
			
}
int smart_array::get_element(int i) {
	if (i >  now_size)
	{
		std::stringstream message;
		message << "Недопустимый индекс при обращении к элементу массива!\n";
		throw ArrayException(message.str());
	}
	return *(it + i);

}

smart_array::~smart_array()
{
	delete[] it;
	it = nullptr;
}



 


