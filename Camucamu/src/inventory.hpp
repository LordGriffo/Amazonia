#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <string>
#include <map>

struct Product {
    std::string name;
    int quantity;

    Product(const std::string& n = "", int q = 0) : name(n), quantity(q) {}
};

class Inventory {
private:
    std::map<int, Product> products;
    int nextProductId;

public:
    Inventory();

    void addProduct(const std::string& name, int quantity);

    void updateProduct(int productId, int quantity);

    void removeProduct(int productId);

    void displayInventory();
};

#endif  // INVENTORY_HPP
