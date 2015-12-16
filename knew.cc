using namespace std;

#include <iostream>

int main() {

  int *p;
  p = new int;
  cout << "p= " << p << ", *p= " << *p << endl;
  *p = 5;
  cout << "p= " << p << ", *p= " << *p << endl;

  //alternativa
  // int *a= new int(5);

  delete p;


 return 0;


}
