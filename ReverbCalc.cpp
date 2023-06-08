#include <iostream>
//last updated: 4/18/2023

//NEED TO UPDATE TO EXACT BREAKDOWN > Add Preferred seller vs regular, and update the processing fee
// 
//There is a 5% selling fee
//For sellers using Reverb Payments, the payment processing fee is 3.19% of the transaction amount +$0.49 per transaction.
//For Reverb Preferred Sellers, the payment processing fee is 2.99 % of the transaction amount + $0.49 per transaction.
//Generally, you keep 91.8% or 92.01% as a Preferred seller -$0.49

int main() {


    double x,y;

    std::cout << "Reverb takes 5% from all sales and a 3.5% transaction fee\n";
    std::cout << "How much did you sell your item for?\n";
    std::cout << "$"; std::cin >> x;
    std::cout << "How much was shipping?\n";
    std::cout << "$"; std::cin >> y;

    if (x < 0) {
        std::cout << "Possible invalid entry\n";
    }
    else if (x > 15000) {
        std::cout << "The maximum fee is $350 USD\n";
        std::cout << "Your profit is: $" << x - 350 << "\n";
    }
    else if (x < 14.2857143) {
        std::cout << "The minimum fee is $.50 USD\n";
        std::cout << "Your profit is: $" << x - .5 << "\n";
    }

    else {
        std::cout << "Your profit is $" << (x * .915) - y << "\n";
    }
}