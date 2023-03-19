#include "Cart.h"
#include "Item.h"
#include <vector>

std::vector<Item> cartItems;

Cart::Cart()
{

}

Cart::~Cart()
{

}

void Cart::addItem(int quantity, const Item& item) {
	for (int i = 0; i < quantity; i++) {
		cartItems.push_back(item);
	}
}

float Cart::calculateTotal() {
	float sum = 0.0f;
	for (auto& item : cartItems) {
		sum += item.GetPrice();
	}

	return sum;
}