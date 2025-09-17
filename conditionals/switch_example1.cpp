#include <iostream>
using namespace std;

int main() {
   int choice;
  
   cout << "Restaurant Menu:" << endl;
   cout << "1. Burger" << endl;
   cout << "2. Pizza" << endl;
   cout << "3. Salad" << endl;
   cout << "Enter your choice (1-3): ";
   cin >> choice;

   switch (choice) {
      case 1:
          cout << "You ordered a Burger - $8.99";
          break;
      case 2:
          cout << "You ordered Pizza - $12.99";
          break;
      case 3:
         cout << "You ordered Salad - $6.99";
          break;
      default:
          cout << "Invalid. Select 1, 2, or 3.";
  }
  
  return 0;
}


