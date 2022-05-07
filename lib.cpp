#include "lib.h"
bool caratteri(int n){
    if(((65<= n)&&(n<= 90)) ||((97<=n)&&(n<=122))){
        return true;
    }
    else {
        return false;
    }
}
