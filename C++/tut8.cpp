# include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void) {counter=0;}
    void setPrice(void);
    void displayPrice(void);
};
void shop :: setPrice(void)
{
    cout <<"Enter ID of your item no.:"<< counter+1 <<endl;
    cin >>itemId[counter];
    cout <<"Enter price of your item:"<<endl;
    cin>>itemPrice[counter];
    counter++;

}
void shop::displayPrice(void)
{
    for (int i=0 ;i<counter ;i++)
    {
        cout<<"The price of the item with item Id "<< itemId[i] <<" is "<< itemPrice[i]<<endl;

    }
}
int main()
{
    shop dukaan1;
    shop dukaan2;
    dukaan1.initCounter();
    dukaan1.setPrice();
    dukaan1.setPrice();
    dukaan1.setPrice();
    dukaan1.displayPrice();
    dukaan2.initCounter();
    dukaan2.setPrice();
    dukaan2.setPrice();
    dukaan2.setPrice();
    dukaan2.displayPrice();
    return 0 ;

}

