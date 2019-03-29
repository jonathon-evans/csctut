#include <iostream>
#include "class.h"

using namespace std;

int main() {
  oof o;
  oof p("¯\\_(ツ)_/¯");
  oof q(p);
  
  //cout << o.secret << endl;
  o.print();
  p.print();
  q.print();
  return 0;
}
