#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ───── Constants ─────
const int MAX_ORDERS = 50;

// ───── Order Item Structure ─────
struct OrderItem {
    string name;
    int    price;
    int    qty;
};

// ───── Global Order Data ─────
OrderItem orders[MAX_ORDERS];
int       orderCount  = 0;
int       runningTotal = 0;

// ═══════════════════════════════════════
//           HELPER FUNCTIONS
// ═══════════════════════════════════════

void printLine(char c, int len) {
    for (int i = 0; i < len; i++) cout << c;
    cout << "\n";
}

void addToOrder(string name, int price) {
    // If item already in order, just increase qty
    for (int i = 0; i < orderCount; i++) {
        if (orders[i].name == name) {
            orders[i].qty++;
            runningTotal += price;
            cout << "\n  >> Added another [" << name << "] to your order.\n";
            return;
        }
    }
    // New item
    orders[orderCount].name  = name;
    orders[orderCount].price = price;
    orders[orderCount].qty   = 1;
    orderCount++;
    runningTotal += price;
    cout << "\n  >> [" << name << "] - PKR " << price << " added!\n";
}

void displayOrder() {
    cout << "\n";
    printLine('=', 45);
    cout << "           CURRENT ORDER SUMMARY\n";
    printLine('=', 45);

    if (orderCount == 0) {
        cout << "  (No items ordered yet)\n";
        printLine('=', 45);
        return;
    }

    cout << left  << setw(25) << "  Item"
         << right << setw(6)  << "Qty"
         << right << setw(10) << "Price"
         << right << setw(10) << "Total" << "\n";
    printLine('-', 45);

    for (int i = 0; i < orderCount; i++) {
        cout << left  << setw(25) << ("  " + orders[i].name)
             << right << setw(6)  << orders[i].qty
             << right << setw(10) << orders[i].price
             << right << setw(10) << (orders[i].price * orders[i].qty)
             << "\n";
    }

    printLine('-', 45);
    cout << left  << setw(35) << "  Running Total (PKR)"
         << right << setw(10) << runningTotal << "\n";
    printLine('=', 45);
}

// ═══════════════════════════════════════
//           CATEGORY MENUS
// ═══════════════════════════════════════

void showAppetizers() {
    int choice;
    cout << "\n";
    printLine('=', 38);
    cout << "            APPETIZERS\n";
    printLine('=', 38);
    cout << "  1. French Fries         PKR  150\n";
    cout << "  2. Onion Rings          PKR  200\n";
    cout << "  3. Garlic Bread         PKR  120\n";
    cout << "  0. Back to Main Menu\n";
    printLine('=', 38);
    cout << "  Select item: ";
    cin  >> choice;

    switch (choice) {
        case 1: addToOrder("French Fries",  150); break;
        case 2: addToOrder("Onion Rings",   200); break;
        case 3: addToOrder("Garlic Bread",  120); break;
        case 0: cout << "  Going back...\n"; break;
        default: cout << "  Invalid choice! Please try again.\n";
    }
}

void showMainCourse() {
    int choice;
    cout << "\n";
    printLine('=', 38);
    cout << "            MAIN COURSE\n";
    printLine('=', 38);
    cout << "  1. Pizza                PKR  600\n";
    cout << "  2. Veg Burger           PKR  350\n";
    cout << "  3. Pasta                PKR  450\n";
    cout << "  0. Back to Main Menu\n";
    printLine('=', 38);
    cout << "  Select item: ";
    cin  >> choice;

    switch (choice) {
        case 1: addToOrder("Pizza",       600); break;
        case 2: addToOrder("Veg Burger",  350); break;
        case 3: addToOrder("Pasta",       450); break;
        case 0: cout << "  Going back...\n"; break;
        default: cout << "  Invalid choice! Please try again.\n";
    }
}

void showDesserts() {
    int choice;
    cout << "\n";
    printLine('=', 38);
    cout << "              DESSERTS\n";
    printLine('=', 38);
    cout << "  1. Chocolate Brownie    PKR  250\n";
    cout << "  2. Ice Cream            PKR  150\n";
    cout << "  3. Gulab Jamun (x2)     PKR  100\n";
    cout << "  0. Back to Main Menu\n";
    printLine('=', 38);
    cout << "  Select item: ";
    cin  >> choice;

    switch (choice) {
        case 1: addToOrder("Chocolate Brownie",  250); break;
        case 2: addToOrder("Ice Cream",          150); break;
        case 3: addToOrder("Gulab Jamun (x2)",   100); break;
        case 0: cout << "  Going back...\n"; break;
        default: cout << "  Invalid choice! Please try again.\n";
    }
}

void showDrinks() {
    int choice;
    cout << "\n";
    printLine('=', 38);
    cout << "               DRINKS\n";
    printLine('=', 38);
    cout << "  1. Coke (250ml)         PKR   80\n";
    cout << "  2. Lemonade (Glass)     PKR  100\n";
    cout << "  3. Iced Tea (Glass)     PKR  120\n";
    cout << "  0. Back to Main Menu\n";
    printLine('=', 38);
    cout << "  Select item: ";
    cin  >> choice;

    switch (choice) {
        case 1: addToOrder("Coke (250ml)",      80); break;
        case 2: addToOrder("Lemonade (Glass)",  100); break;
        case 3: addToOrder("Iced Tea (Glass)",  120); break;
        case 0: cout << "  Going back...\n"; break;
        default: cout << "  Invalid choice! Please try again.\n";
    }
}

// ═══════════════════════════════════════
//              CHECKOUT
// ═══════════════════════════════════════

void checkout() {
    cout << "\n";
    printLine('=', 45);
    cout << "               FINAL BILL\n";
    cout << "          Thank you for dining with us!\n";
    printLine('=', 45);

    if (orderCount == 0) {
        cout << "  No items were ordered.\n";
        printLine('=', 45);
        return;
    }

    cout << left  << setw(25) << "  Item"
         << right << setw(6)  << "Qty"
         << right << setw(10) << "Price"
         << right << setw(10) << "Total" << "\n";
    printLine('-', 45);

    for (int i = 0; i < orderCount; i++) {
        cout << left  << setw(25) << ("  " + orders[i].name)
             << right << setw(6)  << orders[i].qty
             << right << setw(10) << orders[i].price
             << right << setw(10) << (orders[i].price * orders[i].qty)
             << "\n";
    }

    // ───── Tax & Grand Total ─────
    double taxRate   = 0.05;
    int    tax       = (int)(runningTotal * taxRate);
    int    grandTotal = runningTotal + tax;

    printLine('-', 45);
    cout << left  << setw(35) << "  Subtotal (PKR)"
         << right << setw(10) << runningTotal << "\n";
    cout << left  << setw(35) << "  Service Tax 5% (PKR)"
         << right << setw(10) << tax          << "\n";
    printLine('=', 45);
    cout << left  << setw(35) << "  TOTAL AMOUNT DUE (PKR)"
         << right << setw(10) << grandTotal   << "\n";
    printLine('=', 45);
    cout << "\n  Please come again! Goodbye :)\n\n";
}

// ═══════════════════════════════════════
//                MAIN
// ═══════════════════════════════════════

int main() {
    int  choice;
    bool running = true;

    cout << "\n";
    printLine('*', 38);
    cout << "      WELCOME TO CAFE CLAUDE\n";
    cout << "     Your favourite food spot!\n";
    printLine('*', 38);

    while (running) {
        cout << "\n";
        printLine('=', 38);
        cout << "             MAIN MENU\n";
        printLine('=', 38);
        cout << "  1. Appetizers\n";
        cout << "  2. Main Course\n";
        cout << "  3. Desserts\n";
        cout << "  4. Drinks\n";
        cout << "  5. Checkout & Exit\n";
        printLine('=', 38);
        cout << "  Enter your choice: ";
        cin  >> choice;

        switch (choice) {
            case 1:
                showAppetizers();
                displayOrder();
                break;
            case 2:
                showMainCourse();
                displayOrder();
                break;
            case 3:
                showDesserts();
                displayOrder();
                break;
            case 4:
                showDrinks();
                displayOrder();
                break;
            case 5:
                checkout();
                running = false;
                break;
            default:
                cout << "\n  Invalid option! Please enter 1 to 5.\n";
        }
    }

    return 0;
}