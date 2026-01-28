#include <iostream>
#include <string>
using namespace std;

int main() {
    double newPrice, oldPrice, inflation;

    cout << "==================================================" << endl;
    cout << "         WELCOME TO THE INFLATION INDICATOR       " << endl;
    cout << "==================================================" << endl;

    // --- EDUCATION MODULE ---
    cout << "\n[EXPORTS]: Selling your 'Made in India' products to the world." << endl;
    cout << "Think: Sending Indian tea to London. Money comes INTO India." << endl;

    cout << "\n[IMPORTS]: Buying products from other countries." << endl;
    cout << "Think: Buying a German car. Money goes OUT of India." << endl;

    cout << "\n[WHY INFLATION MATTERS]:" << endl;
    cout << "Inflation tells us how fast prices are rising." << endl;
    cout << "If your prices rise faster than the rest of the world," << endl;
    cout << "your Exports become too expensive, and nobody buys them!" << endl;
    cout << "--------------------------------------------------" << endl;

    // --- INPUT PHASE ---
    cout << "\nEnter the LATEST price of a product: ";
    cin >> newPrice;
    cout << "Enter the OLD price of that same product: ";
    cin >> oldPrice;

    // Calculation: (New - Old) / Old * 100
    inflation = ((newPrice - oldPrice) / oldPrice) * 100;

    cout << "\nRESULT: The Inflation rate is " << inflation << "%" << endl;

    // --- LOGIC PHASE ---
    if (inflation == 0) { // Note the '==' for comparison
        cout << "STATUS: Prices are stagnant. The economy is 'frozen'." << endl;
    } 
    else if (inflation < 0) {
        cout << "STATUS: DEFLATION detected!" << endl;
        cout << "Effect: Your money is gaining 'Power' (Appreciation)." << endl;
        cout << "Advice: Imports are cheaper now. Stock up on foreign tech!" << endl;
    } 
    else {
        cout << "STATUS: INFLATION detected!" << endl;
        cout << "Effect: Your money is losing 'Power' (Depreciation)." << endl;
        cout << "Advice: Stop buying from abroad! Focus on EXPORTS to earn foreign cash." << endl;
    }

    cout << "\n==================================================" << endl;
    return 0;
}