#include <iostream>

using namespace std;

int main()
{
char c;
cin >> c;
 switch(c){
case '1':
 cout << "Beverage\nThat will be $8.00\n";
 break;
case '2':
 cout << "Candy\nThat will be $5.50\n";
 break;
case '3':
 cout << "Hot dog\nThat will be $10.00\n";
 break;
case '4':
 cout << "Popcorn\nThat will be $7.50\n";
 break;
default:
 cout << "That is not a proper selection.\n";
 cout << "I'll assume you're just not hungry.\n";
 cout << "Can I help whoever's next?\n";
 }

 return 0;
}
//This is just a code snippet.
