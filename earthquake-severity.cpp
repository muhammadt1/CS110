#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{

  double n1;

  cout << "Enter a number to determine the severity of the earthquake: ";
  cin >>n1;

  //The first number in [x,y) is included in the range since its a closed bracket. While the y wont be since its a parenthese.
  

  if ((n1>=0) && (n1<4)) 
  {
    cout << "Severity of earthquake is minor"<<endl;
  }
  else if ((n1>=4) && (n1<5))
  {
    cout << "Severity of earthquake is light"<<endl;
  }
   else if ((n1>=5) && (n1<6))
  {
    cout << "Severity of earthquake is moderate"<<endl;
  }
   else if ((n1>=6) && (n1<7))
  {
    cout << "Severity of earthquake is strong"<<endl;
  }
   else if ((n1>=7) && (n1<8))
  {
    cout << "Severity of earthquake is major"<<endl;
  }
   else if (n1>=8)
  {
    cout << "Severity of earthquake is great"<<endl;
  }
  else
   {
     cout << "ERROR"<<endl;
   }
  
  





  
}