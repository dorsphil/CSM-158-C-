
#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score ";
    cin >> score;

    if (score >= 70) {
        cout << "Grade A" << endl;
    } else if (score >= 60) {
        cout << "Grade B" << endl ;
    } else if (score >= 50) {
        cout << "Grade C" << endl;
    } else if (score >= 40) {
        cout << "Grade D" << endl ;
    } else {
        cout << "Grade F" << endl ;
    }

return 0;
}























