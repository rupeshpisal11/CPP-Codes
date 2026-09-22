// Program 11: E-Commerce Product Catalog
// Unit I - Static members, inline functions, constructor and destructor
// Compile: g++ -std=c++17 -Wall program11.cpp -o program11

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
  int productId;
  string productName;
  double price;
  int stockQuantity;
  // static: one shared counter for all Product objects that exist right now.
  static int totalProducts;

public:
  Product(int id, string name, double p, int stock)
      : productId(id), productName(name), price(p), stockQuantity(stock) {
      // Each new product increases the shared count.
      totalProducts++;
  }

     // Small inline getters; const means they do not change the object.
     inline int getId() const { return productId; }
     inline string getName() const { return productName; }
     inline double getPrice() const { return price; }

     void updateStock(int quantity) {
         stockQuantity = quantity;
     }

     // static member function: can be called without creating an object.
     static int getTotalProducts() {
         return totalProducts;
     }

     void display() const {
         cout << "ID: " << productId
            << " | Product: " << productName
            << " | Price: Rs. " << price
            << " | Stock: " << stockQuantity << endl;
     }

     // Destructor: reduces the count when a product is destroyed.
     ~Product() {
         totalProducts--;
     }
};

// Definition and initialisation of the static data member.
int Product::totalProducts = 0;

int main() {
     Product p1(1001, "Laptop", 55000, 15);
     Product p2(1002, "Mouse", 450, 50);
     Product p3(1003, "Keyboard", 1200, 30);

    cout << "=== Product Catalog ===" << endl;
    p1.display();
    p2.display();
    p3.display();

    cout << "\nTotal Products in Catalog: "
       // Call the static function using the class name.
       << Product::getTotalProducts() << endl;
}
