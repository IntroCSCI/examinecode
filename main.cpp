#include <iostream>

using namespace std;

int main(){
  int original;
  int replacement;
  const double PI = 3.14;
  double area;
  int quotient;
  double shortage;
  
  cout << "What is the original?\n";
  cin >> original;
  cout << "What is the replacement?\n";
  cin >> replacement;
  
  area = PI * (original/2) * (original/2);
  quotient = area / ( PI * (replacement/2) * (replacement/2) );
  shortage = area % ( PI * (replacement/2) * (replacement/2) );
  
  cout << "You should get at least " << quotient << " of size " << replacement << endl;
  cout << " and " << (shortage * 100) << " of another for the same amount\n";
  
  return 0;
}
