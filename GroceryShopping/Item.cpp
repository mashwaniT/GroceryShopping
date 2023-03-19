#include "Item.h"
#include <iostream>

Item::Item():
	m_name(""),
	m_price(0),
	m_barcode(0),
	m_limit(0),
	m_discounted_price(0),
	m_weight(0)

{

}

Item::Item(std::string name, float price, int barcode, int limit, float discounted_price, float weight) :
	m_name(name),
	m_price(price),
	m_barcode(barcode),
	m_limit(limit),
	m_discounted_price(discounted_price),
	m_weight(weight)
{
	std::cout << "I am in constructor 1" << std::endl;
}