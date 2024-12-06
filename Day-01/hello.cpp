#include <iostream>
using namespace std;
int main (){
    int y = 40;
    int x = 90;
    x = 56;
    int z = (x = 90);

    cout << (z = 5);

    return 0;
}