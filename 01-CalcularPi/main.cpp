#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << setprecision(8);

    double leibniz = 1;
    int i = 0;
    
        while(int((leibniz*4.0)*1000000) != 3141592){
            ++i;
            if(i%2 == 0){
                leibniz += 1.0/(2.0*i+1.0);
            }else{
                leibniz -= 1.0/(2.0*i+1.0);
            }
        }

    cout << "Pi = " << leibniz*4.0 << endl;

    return 0;
}
