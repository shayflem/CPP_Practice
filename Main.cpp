#include <iostream>
#include <string>
using namespace std;

int main(){

int currdate;
char timewrap;

cout << "Welcome to the Time Calculator" << endl;

cout << "The current date is: " << endl;
cout << currdate;

cout << "Would you like to go forward (F) or backward (B) in time?" << endl;
cin >> timewrap;

if (timewrap == 'B' || timewrap == 'b'){
cout << "Back to the future we go...But how far?" << endl;
}


return 0;
}
