#include<iostream>
#include<string>
#include "enc_dec.h"
using namespace std;
int main(){
    char n;
    cout << "what do you want to do" << endl << "e for Encryption\nd for Decryption" << endl;
    cin >> n;
    string sen;
    if(n == 'e'){
        cout << "Enter value to Encrypt : ";
        cin >> sen;
        cout << enc(sen);
    }
    else if(n == 'd'){
        cout << "Enter value to Decrypt : ";
        cin >> sen;
    }
    else{
        cout << "this command is not found";
    }
    
    return 0;
}