#include <iostream>

using namespace std;

int main() {
    
 //   int num{};

 //   cout << "enter a number: ";
 //   cin >> num;

 ////using if else
 //   if (num % 2 == 0)
 //       cout << num << " is even" << endl;
 //   else
 //       cout << num << " is odd" << endl;

 //using conditional operator
 //   cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

//conditional operator within an if conditional statement.
    int num1{}, num2{};

    cout << "Enter two numbers separat ed by a space: ";
    cin >> num1 >> num2;
    if (num1 != num2) {
        cout << "Largest: " << ((num1>num2)?num1:num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else {
        cout << "The numbers are the same" << endl;
    }

}