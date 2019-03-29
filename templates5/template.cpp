#include <iostream>
#include <string>

using namespace std;

template <class T>
T add(T a,T b) {
    return a + b;
}
int main() {
    cout << add<int>(100, 200) <<  endl;
    cout << add<double>(1.0, 1.0) <<  endl;
    cout << add<string>("hello", " there!") <<  endl;

    return 0;
}