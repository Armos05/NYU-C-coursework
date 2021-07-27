#include <iostream>
using namespace std;

const double BUY_ONE_GET_ONE_PROMOTION = 0.5;
const double CLUB_MEMBER_DISCOUNT = 0.9;
const double PERCENTILE = 100;

int main(){
    int priceOfFirstItem, priceOfSecondItem, basePrice;
    double taxRate, promotionPrice, priceAfterDiscount, totalPrice;
    char cardHoldOrNot;

    cout<<"Enter price of first item: ";
    cin>>priceOfFirstItem;
    cout<<"Enter price of second item: ";
    cin>>priceOfSecondItem;
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>cardHoldOrNot;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;

    basePrice = priceOfFirstItem + priceOfSecondItem;

    if(priceOfFirstItem > priceOfSecondItem){
        promotionPrice = priceOfFirstItem + BUY_ONE_GET_ONE_PROMOTION * priceOfSecondItem;
    } else {
        promotionPrice = BUY_ONE_GET_ONE_PROMOTION * priceOfFirstItem + priceOfSecondItem;
    }

    if((cardHoldOrNot == 'Y') || (cardHoldOrNot == 'y')) {
        priceAfterDiscount =  CLUB_MEMBER_DISCOUNT * promotionPrice;
    } else {
        priceAfterDiscount = promotionPrice;
    }

    totalPrice = priceAfterDiscount + (priceAfterDiscount * taxRate/PERCENTILE);

    cout<<"Base Price: "<<basePrice<<endl;
    cout<<"Price after discounts: "<<priceAfterDiscount<<endl;
    cout<<"Total price: "<<totalPrice<<endl;

    return 0;
}
