#include <iostream>
#include <string>

using namespace std;

class Quickmart{
    private:
    int itemNo;
    int price;
    int quantity;
    int totalCost;
    int discount;
    int net;
    
    public:
    Quickmart() {};
    Quickmart(int, int, int);
    ~Quickmart();
    int Total_cost();
    int Discount();
    int Net_pay();
    void show();
};
int main()
{
    int No_of_items, itemNo, price, quantity;
    int totalAmount = 0;
    
    cout << "Enter the number of items : ";
    cin >> No_of_items;
    
    Quickmart *items = new Quickmart[No_of_items];
    
    for (int i = 0; i < No_of_items; i++) {
        cout << "\n Enter item code for item  "<<i + 1<<" : ";
        cin >> itemNo;
        cout << "\n Enter price of item "<<i + 1<<" : ";
        cin >> price;
        cout << "\nEnter quantity of item "<<i + 1<<" : ";
        cin >> quantity;
        
        items[i] = Quickmart(itemNo, price, quantity);
        
        items[i].Total_cost();
        items[i].Discount();
        items[i].Net_pay();
         items[i].show();
        
        totalAmount += items[i].Net_pay();
    }

       
    
    cout << "\nThe total amount payable is : " << totalAmount << endl;
    
    delete []items;
    
    return 0;
}
Quickmart::Quickmart(int itemNo, int price, int quantity) {
    itemNo = itemNo;
    price = price;
    quantity = quantity;
    totalCost = 0;
    discount = 0;
    net = 0;
}

Quickmart::~Quickmart() {}

int Quickmart::Total_cost() {
    totalCost = price * quantity;
    return totalCost;
}

int Quickmart::Discount() {
    if (totalCost > 20000) {
        discount = totalCost * 0.14;
    } else if (totalCost >= 10000) {
        discount = totalCost * 0.10;
    } else {
        discount = 0;
    }
    return discount;
}

int Quickmart::Net_pay() {
    net = totalCost - discount;
    return net;
}

void Quickmart::show() {
    cout<<"\n item_code\tquantity\tprice\ttotal_cost\tDiscount\tNet";

    cout<<"\n "<<itemNo;
        cout<<"\t\t"<<price;
        cout<<"\t\t"<<quantity;
        cout<<"\t"<<totalCost;
        cout<<"\t"<<discount;
        cout<<"\t"<<net;
}