#include <iostream>

using namespace std;

struct facts  {
  bool todd_cute = true;
  bool hou_has_problem = true;
  void changeColor(bool &pleb) {
    pleb = !pleb;
  }
};

int main() {

  facts f;
  cout << "Original: "<< "Todd is cute: " << f.todd_cute << " Hou is has_problem: " << f.hou_has_problem << '\n';

  f.todd_cute = !f.todd_cute;
  f.hou_has_problem = !f.hou_has_problem;
  cout << "No Function: "<< "Todd is cute: " << f.todd_cute << " Hou is has_problem: " << f.hou_has_problem << '\n';

  f.changeColor(f.todd_cute);
  f.changeColor(f.hou_has_problem);
  cout << "With Function: "<< "Todd is cute: " <<  f.todd_cute << " Hou is has_problem: " << f.hou_has_problem << '\n';


  return 0;
}