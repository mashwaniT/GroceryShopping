// GroceryShopping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Item.h"
#include "FoodItem.h"
#include "Cart.h"

int main()
{
    FoodItem apple("02-02-2002", "Apple", 2.5, 0000001);
    FoodItem banana("02-02-2002", "Banana", 1.5, 0000002);
    Item usb("USB", 55, 0000003);

    std::auto_ptr<Cart> myCart(new Cart());
    myCart->addItem(3, apple);
    myCart->addItem(6, banana);
    myCart->addItem(3, usb);

    float sum = myCart->calculateTotal();
    std::cout << sum << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
