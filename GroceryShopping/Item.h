#pragma once
#include <string>


class Item
{
public:
	Item();
	Item(std::string name, float price, int barcode, int limit = 0, float discounted_price = 0, float weight = 0);
	~Item();

	float GetPrice() {
		return m_price;
	}

	void SetPrice(float price) {
		m_price = price;
	}

private:
	std::string m_name;
	float m_price;
	int m_barcode;
	int m_limit;
	float m_discounted_price;
	float m_weight;
};

