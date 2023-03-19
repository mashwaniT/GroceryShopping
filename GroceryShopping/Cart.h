#pragma once
#include "Item.h"
#include <iostream>
#include <vector>


class Cart
{
public:
	Cart();
	~Cart();

	void addItem(int quantity, const Item& item);
	float calculateTotal();

private:
	int m_quantity;
	Item m_item;
};

