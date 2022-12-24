#include <iostream>
using namespace std;


void names(string nameOne, string nameTwo);


int main() 
{
  string first, last;
  
  cout << "Enter your first name: ";
  cin >> first;

  cout << "Enter your last name: ";
  cin >> last;

  names(first, last);

  
}

void names(string nameOne, string nameTwo)
{
  cout << "Your full name is "<<nameOne<<nameTwo<<endl;
  
}