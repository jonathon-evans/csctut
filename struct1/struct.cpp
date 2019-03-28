#include <iostream>

using namespace std;

struct facts  {
  bool todd_black = true;
  bool hou_white = true;
  void changeColor(bool &pleb) {
    pleb = !pleb;
  }
};

int main() {

  facts f;
  cout << "Original: "<< "Todd is black: " << f.todd_black << " Hou is white: " << f.hou_white << '\n';

  f.todd_black = !f.todd_black;
  f.hou_white = !f.hou_white;
  cout << "No Function: "<< "Todd is black: " << f.todd_black << " Hou is white: " << f.hou_white << '\n';

  f.changeColor(f.todd_black);
  f.changeColor(f.hou_white);
  cout << "With Function: "<< "Todd is black: " <<  f.todd_black << " Hou is white: " << f.hou_white << '\n';


  return 0;
}