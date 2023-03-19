#pragma once
#include "Item.h"
#include <string>

class FoodItem :
    public Item
{
public:
    FoodItem(std::string expiry, std::string name, float price, int barcode, int limit = 0, float discounted_price = 0, float weight = 0);
    ~FoodItem();

private:
    std::string m_expiry;
};

