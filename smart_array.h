#pragma once
class smart_array
{
public:
	smart_array(int i);
		int add_element(int addElement);
	int get_element(int addElement);
	~smart_array();
private:
	int now_size;
	int full_size;
	int* it;
};

