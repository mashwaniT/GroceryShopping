#include "FoodItem.h"
#include <iostream>

FoodItem::FoodItem(std::string expiry, std::string name, float price, int barcode, int limit, float discounted_price, float weight) :
	Item(name, price, barcode, limit, discounted_price, weight),
	m_expiry(expiry)

{
	std::cout << "I am in FoodItem constructor" << std::endl;
}

FoodItem::~FoodItem() {

}