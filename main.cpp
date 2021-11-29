#include "std_lib_facilities.h"	
using namespace std;

int main() {
  //declare variable
  int n;
  //print message to ask for input
  cout << "Enter an integer: ";
  //get user input
  cin >> n;
  //check if the number is even or odd by checking the remainder when dividing the number by 0
  if ( n % 2 == 0){
    //number is even
    //display message
    cout << "The value " << n << " is an even number.";
  }
  else{
    //number is odd
    //display message
    cout << "The value " << n << " is an odd number.";
  }
  //return 0
  return 0;
}