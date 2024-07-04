#include <iostream>

//this class is for Nested Decision Stats
using namespace std;


string shortcode;
int option99;
int option1;
int option2;
int option3;
int option4;
int option5;
int option6;
int main(){
    cout<<"Welcome to Mini Momo"<<endl;
    cout<<"Please enter your shortcode:"<<endl;
    cin>>shortcode;

    if(shortcode == "*170#"){
        cout<<"1. Transfer Money\n2. Momo Pay & Pay Bill\n3. Airtime & Bundles\n4. Allow Cashout\n5. Financial Services\n6. My Wallet\n";
        cin>>option1;
        {
        if (option1==1)
        cout<<"1. MoMo User\n2. Non MoMo User\n3. Send With Care\n4. Fvorite\n5. Other Networks\n6. Bank Account\n0. Back\n";
    }

    {
            cin>>option2;
            if(option2==2)
                cout<<"1. Momo Pay\n2. Pay Bill\n3. GHQR\n4. Fuels\n5. Ghana.GOV\n0. Back\n";
    }

    {

                cin>>option3;
                if (option3=3)
                    cout<<"1. Airtime\n2. Internet Bundles\n3. Fixed Broadband\n4. Schedule Airtime\n5. Just4U\n0. Back\n";
    }

    {

                cin>>option4;
                if(option4=4)
                    cout<<"1. Yes\n2. No\n0. Back\n";
    }

    {

                cin>>option5;
                if(option5=5)
                    cout<<"1. Bank Services\n2. Savings\n3. Loans\n4. Pensions and Investments\n5. Insurance\n6. Trade Shares\n0. Back\n";
    }

    {

                cin>>option6;
                if(option6=6)
                cout<<"1. Check Balance\n2. Allow Cash Out\n3. My Approvals\n4. Report Fraud\n5. Statements\n6. Change and Reset PIN\n7. Upgrade Profile Type\n99. Next\n";

    }

    {
                cin>>option99;
                if(option99=99)
                    cout<<"8. Reversals\n9. Check Wallet Limits\n10. Favorite\n11. Name&Next of Kin\n0. Back\n";
    }


    }


if (shortcode != "*170#") {
    // code to execute if condition is true
}
    cout << "Invalid shortcode" << endl;


return 0;
}






