#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int precision = 900000;
    double leibniz = 1;

    for( int i=1; i < precision; ++i){
        if(i%2 == 0){
            leibniz += 1.0/(2.0*i+1.0);
        }else{
            leibniz -= 1.0/(2.0*i+1.0);
        }
    }

    cout << "Pi = " << setprecision(7) << leibniz*4.0 << endl;

    return 0;
}