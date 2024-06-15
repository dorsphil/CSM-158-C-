#include <iostream>

//this class is for Nested Decision Stats
using namespace std;


string shortcode;
int option1;
int option2;
int main(){
    cout<<"Welcome to Mini Momo"<<endl;
    cout<<"Please enter your shortcode:"<<endl;
    cin>>shortcode;

    if(shortcode == "*170#"){
        cout<<"1. Transfer Money\n2. Momo Pay & Pay Bill\n3. Airtime and Bundles\n4. Allow Cashout\n5. Financial Services\n6. My Wallet\n";
        cin>>option1;
        if (option1==1)
    {


            cout<<"1. Momo User\n2. None Momo User\3. Send With Care\n4. Fvaourite\n5. Other Networks\n6. Bank Account\n";
            cin>>option2;
            if(option2==2){
                cout<<"1. Momo Pay\n2. Pay Bill\n3. GHQR\n4. Fuels\n5. Ghana.gov\n";

            }
        }
    }
    else{
        cout<<"Invalid shortcode"<<endl;
    }
    return 0;
}






