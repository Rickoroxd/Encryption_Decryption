#include<iostream>
#include<string>
#include "enc_dec.h"
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    cout<< mono("password");
    return 0;
}