//i coded this myself with the assistance of ai to help me understand what was wrong with certain functions //

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


using namespace std;


const int SLICES_PER_PIZZA = 8;
const double GST_RATE = 0.05;


string PartyName;
int Guests;
int SlicesPerGuest;
double PricePerPizza;


int main()
{


    cout << "Party name: ";
    getline(cin, PartyName);
    cout << "Number of Guests: ";
    cin >> Guests;
    cout << "Slices per Guests:  ";
    cin >> SlicesPerGuest;
    cout << "Price Per Pizza:  $";
    cin >> PricePerPizza;


    int totalSlices = Guests * SlicesPerGuest;
    int pizzasNeeded = ceil(totalSlices / (double)SLICES_PER_PIZZA);


    double SubTotal = pizzasNeeded * PricePerPizza;
    double gst = SubTotal * GST_RATE;
    double total = SubTotal + gst;
    double costPerGuest = total / Guests;

    cout <<fixed<<setprecision(2);

    cout << "======== PARTY PIZZA RECEIPT ========"<<endl;
    cout << "Party Name :  "<< PartyName << endl;
    cout << "Guests :  "<< Guests << endl;
    cout << "Slices per Guests:  "<< SlicesPerGuest << endl;
    cout << "Pizzas Needed:  " << pizzasNeeded << endl;
    cout << "Price Per Pizza:  $" << PricePerPizza << endl;
    cout <<"--------------------------------------"<<endl;
    cout << "Subtotal:  $" << SubTotal << endl;
    cout << "GST:  $" << gst << endl;
    cout << "Total Cost:  $" << total << endl;
    cout << "Cost Per Guest:  $" << costPerGuest << endl;
    cout << "====================================="<<endl;




    return 0;
}
