#pragma once
class Product
{
protected:
	int id;
	std::string name;
	std::string maker;
	float price;
	int amount;
public:
	Product();
	Product(std::string name, std::string maker, float price, int amount);
	~Product();
	void display_info();
	void change_price(float price);
	void change_amount(int amount);
	virtual float calc_total_cost() = 0;
};

