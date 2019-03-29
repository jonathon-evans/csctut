#include <iostream>
#include <string>
using namespace std;

class oof {
public:
  oof() {
    secret = "omae wa mou shindeiru";
  }
  oof(const oof &o) {               //pass objects in by reference because you only send a reference instead of an entire object || it's faster
    secret = o.secret;
  }
  oof(string s) {
    secret = s;
  }
  void print() {
    cout << secret << '\n';
  }
private:
  string secret;

};