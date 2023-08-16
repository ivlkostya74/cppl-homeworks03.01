#pragma once
class smart_array
{
public:
	smart_array(int i);
	smart_array(const smart_array&) = delete;
	smart_array& operator=(const smart_array&) = delete;
		int add_element(int addElement);
	int get_element(int addElement);
	~smart_array();
private:
	int now_size;
	int full_size;
	int* it;
};

