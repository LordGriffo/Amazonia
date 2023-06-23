#include "inventory.hpp"
#include <iostream>
#include <string>

int main() {
    Inventory inventory;
    int choice;
    int productId;
    std::string productName;
    int productQuantity;

    while (true) {
        std::cout << "========================" << std::endl;
        std::cout << "Inventory Control System" << std::endl;
        std::cout << "========================" << std::endl;
        std::cout << "1. Add product" << std::endl;
        std::cout << "2. Update product quantity" << std::endl;
        std::cout << "3. Remove product" << std::endl;
        std::cout << "4. Display inventory" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter product name: ";
                std::cin.ignore();
                std::getline(std::cin, productName);
                std::cout << "Enter product quantity: ";
                std::cin >> productQuantity;
                inventory.addProduct(productName, productQuantity);
                break;

            case 2:
                std::cout << "Enter product ID: ";
                std::cin >> productId;
                std::cout << "Enter new product quantity: ";
                std::cin >> productQuantity;
                inventory.updateProduct(productId, productQuantity);
                break;

            case 3:
                std::cout << "Enter product ID: ";
                std::cin >> productId;
                inventory.removeProduct(productId);
                break;

            case 4:
                inventory.displayInventory();
                break;

            case 5:
                std::cout << "Exiting program" << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }

    return 0;
}
