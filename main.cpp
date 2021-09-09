/* Jonathon Irizarry, Cosc-1436, Repl.it IDE
   The program below is used to grab a user's ammount of pennies that they have and converts it to the exact amount of change starting from the highest amount of change, being quarters all the way down to pennies.
 */
#include <iostream>
using namespace std;

int main() {
  //Constants
  const double dollars = 100; 
  const int quarters = 25;
  const int dimes = 10;
  const int nickels = 5;
  const int pennies = 1;

  //Variables
  int num;
  int division;
  int divisionD;
  int divisionQ;
  int divisionDi;
  int divisionN;
  

  //All below with cout << is the output and this is the whole calculation process
  cout << "Please enter your pennies: ";
  // Below is the input (cin >>)
  cin >> num; 
  cout << "Dollars: " <<  num / 100 << '\n';
  divisionD = num % 100; 
  cout << "Quarters: " <<  divisionD / 25 << '\n';
  divisionQ = divisionD % 25;
  cout << "Dimes: " <<  divisionQ / 10  << '\n';
  divisionDi = divisionQ % 10;
  cout << "Nickels: " <<  divisionDi / 5 << '\n';
  divisionN = divisionDi % 5;
  cout << "Pennies: " <<  divisionN / 1 << '\n';
}