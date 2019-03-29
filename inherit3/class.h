#include <iostream>
#include <string>

using namespace std;

class cs_student {
  public:
  cs_student() {
    isWeeb = NULL;
    wantsToDie = NULL;
    goodAtProgramming = NULL;
    canBeSeen = true;
  }
  void print() {
    cout << "isWeeb = " << isWeeb << endl;
    cout << "wantsToDie =" << wantsToDie << endl;
    cout << "goodAtProgramming =" << goodAtProgramming << endl;
    cout << "canBeSeen =" << canBeSeen << endl;
  }
  protected:
    bool isWeeb;
    bool wantsToDie;
    bool goodAtProgramming;
  private:
    bool canBeSeen;
};

class Todd: public cs_student {
  public:
    Todd() {
      isWeeb = true;
      wantsToDie = true;
      goodAtProgramming = true;
    }
};

class Hou: protected cs_student {
  public:
  Hou() {
    isWeeb = false;
    wantsToDie = true;
    goodAtProgramming = true;
  }
  void printH() {
    print();
  }
};

class Ashley: private cs_student {
  public:
    string canSee;
    Ashley() {
      //constructor still works because it's a member function;
      isWeeb = false;
      wantsToDie = false;
      goodAtProgramming = true;
      canSee = "You can see me!";
    }
    void printA() {
      print();
      cout << canSee << endl;
    }
};



class AshelysPhone: private Ashley {
  public:
    //AshelysPhone() {
    //  isWeeb = false;
    //  wantsToDie = false;
    //  goodAtProgramming = true;
    //  canSee = "Owo";
    //}
    //void printAP() {
    //  print();
    //  printA();
    //}
};

//class A  
//{ 
//public: 
//    int x; 
//protected: 
//    int y; 
//private: 
//    int z; 
//}; 
//  
//class B : public A 
//{ 
//    // x is public 
//    // y is protected 
//    // z is not accessible from B 
//}; 
//  
//class C : protected A 
//{ 
//    // x is protected 
//    // y is protected 
//    // z is not accessible from C 
//}; 
//  
//class D : private A    // 'private' is default for classes 
//{ 
//    // x is private 
//    // y is private 
//    // z is not accessible from D 
//}; 