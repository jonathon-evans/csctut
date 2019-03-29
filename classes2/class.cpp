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

  //class num {
    //    public:   
    //        num() {
    //            x = 0;
    //        }
    //        num(int x) {
    //            this->x = x;
    //        }
    //        num operator+(const num& s) {            
    //            num oof;
    //            oof.x = this->x + s.x;
    //            return oof;
    //        }
    //        void print() {
    //            cout << x << endl;
    //        }
    //    private:
    //        int x;
    //};

    //num a(5);
    //num b(10);
    //num c;
    //c = a + b;
    //c.print();
  return 0;
}
