/*
Written by: Jonathon Evans

see: http://www.cplusplus.com/doc/tutorial/pointers/ for resources
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    //string *fact1, *fact2;
    //string oof = "todd weeb lolxd";
    //fact1 = &oof;                                     //setting memory address of fact1 equal to the adress of 'oof';
    //fact2 = &oof;
    //cout << fact1 << '\n';
    //cout << fact2 << '\n';
    //cout << *fact1 << '\n';
    //cout << *fact2 << '\n';

    //cout << "----------------------------\n";
    //*fact1 = "test";                                  //setting the value pointed to by fact1
    //cout << *fact1 << '\n';
    //cout << *fact2 << '\n';

    
    //<----------------------------------------------------------------------------------------------------------------->
    //char a = 'a', b = 'b';
    //char *oof, *ouch;

    //oof = &a;                                         //set value of oof and ouch to adress of 'a' and 'b'
    //ouch = &b;                                        //
    //*oof = 'h';                                       //set value of what oof is pointing at to 'h'
    //*ouch = *oof;                                     //set value ouch points at = value oof points at
    //oof = ouch;                                       //set memory adress oof points to = memory adress ouch points to
    //*oof = 'i';                                       //set value oof points to equal to 'i'
    //cout << "oof: " << a << endl;
    //cout << "ouch: " << b << endl;

    //<----------------------------------------------------------------------------------------------------------------->

    //int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};     
    //const int * p = arr;                              //p now points to the first element in the array
    //for(int i = 0; i < 10; ++i) {
    //    cout << p[i] << endl;
    //    //cout << *(p + i) << endl;
    //}
    
    //<----------------------------------------------------------------------------------------------------------------->
    //char* god;
    //string temp;
    //cin >> temp;
    //god = new char[temp.size()];                      //this is how you dynamically allocate an array of x size
    //for(int i = 0; i < temp.size(); ++i) {
    //    god[i] = temp[i];
    //}
    //for(int i = 0; i < temp.size(); ++i) {
    //    cout << god[i];
    //}

    //delete[] god;                                     //with larger programs, having alot of stuff dynamically allocated onto the heap
    //god = NULL;                                       //could be a problem, so we use delete and set the pointer equal to null to remove that problem

    //<----------------------------------------------------------------------------------------------------------------->
    //class oof {
    //    public:
    //        oof() {
    //            secret = "i tried the new 'lymonade' flavor of sprite and it's just better MelloYello";
    //        }
    //        oof(const oof &source) {
    //            this->secret = source.secret;       //'this' is a pointer to the object it's inside of
    //        }
    //        void print() {
    //            cout << secret << endl;
    //        }
    //    private:
    //        string secret;
    //};
    //oof* o = new oof();
    //o->print();                                     //pointers to objects have to use -> notation instead of . notation
    //
    //<----------------------------------------------------------------------------------------------------------------->
    return 0;
}