#include<iostream>
#include<string>
#include "enc_dec.h"
#include<ctime>
using namespace std;

int main(){
    srand(time(0)); 
    generateMapping();

    string text = "password";
    string enc = mono(text);
    string dec = monoDecrypt(enc);

    cout << "Original : " << text << "\n";
    cout << "Encrypted: " << enc << "\n";
    cout << "Decrypted: " << dec << "\n";
    
    return 0;
}