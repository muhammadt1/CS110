#include <iostream>
using namespace std;

int main() 
{
  int mark;

  cout << "Enter your mark: ";
  cin >> mark;

  if ((mark >=0) && (mark <=49))
  {
    cout << "Weak Performance"<<endl;
  }
  if ((mark >= 50) && (mark <=59))
  {
    cout << "Limited Performance" <<endl;
  }
  if ((mark >=60) && (mark <= 69))
  {
    cout << "Adequate Performance" <<endl;
  }
  if ((mark >=70) && (mark <= 79))
  {
    cout << "Proficient Performance"<<endl; 
  }
  if ((mark >=80) && (mark <=100))
  {
    cout <<"Expemplary Perfomance" <<endl; 
  }
  else 
    if (mark > 100)
    {
    cout << "This mark is not valid"<<endl;
    }
    else if (mark < 0)
    {
      cout << "This mark is not valid"<<endl;
    }
  
  
  
  




  
}