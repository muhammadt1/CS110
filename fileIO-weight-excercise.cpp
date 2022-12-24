#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  fstream weightFile;
  int weight1;
  int weight2;
  int weight3;
  string name1;
  string name2;
  string name3;

  weightFile.open ("muhammad.txt");
 
  
  cout << "Enter a name: ";
  cin >>name1;

  cout << "Enter a weight for "<< name1<<": ";
  cin >> weight1;
  cout <<endl;

  
  cout << "Enter a name: ";
  cin >>name2;
  
  cout << "Enter a weight for "<< name2<<": ";
  cin >> weight2;
  cout <<endl;

  
  cout << "Enter a name: ";
  cin >>name3;

  cout << "Enter a weight for "<< name3<<": ";
  cin >> weight3;
  cout <<endl;

  weightFile << name1 << " weighs "<<weight1<<endl;
  weightFile << name2 << " weighs "<<weight2<<endl;
  weightFile << name3 << " weighs "<<weight3<<endl;
  


  















  
}