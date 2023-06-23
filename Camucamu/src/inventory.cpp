#include "inventory.hpp"
#include <iostream>

Inventory::Inventory() : nextProductId(1) {}

void Inventory::addProduct(const std::string& name, int quantity) {
    Product newProduct(name, quantity);
    products[nextProductId] = newProduct;
    std::cout << "Product added successfully. Product ID: " << nextProductId << std::endl;
    nextProductId++;
}

void Inventory::updateProduct(int productId, int quantity) {
    if (products.count(productId) > 0) {
        products[productId].quantity = quantity;
        std::cout << "Product quantity updated successfully." << std::endl;
    } else {
        std::cout << "Product not found." << std::endl;
    }
}

void Inventory::removeProduct(int productId) {
    if (products.count(productId) > 0) {
        products.erase(productId);
        std::cout << "Product removed successfully." << std::endl;
    } else {
        std::cout << "Product not found." << std::endl;
    }
}

void Inventory::displayInventory() {
    if (products.empty()) {
        std::cout << "Inventory is empty." << std::endl;
    } else {
        std::cout << "Inventory:" << std::endl;
        for (const auto& pair : products) {
            std::cout << "Product ID: " << pair.first << ", Name: " << pair.second.name << ", Quantity: " << pair.second.quantity << std::endl;
        }
    }
}
