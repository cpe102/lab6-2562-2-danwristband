#include <iostream>
using namespace std;

int main() {
    int a  =  20; 
    int b = 30;
    int c = 4;
    float output;

    output = float(a - (float(b)/c));
    cout << "output:"<< float(output) << endl;
    return 0;
}
