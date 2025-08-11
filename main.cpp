#include<iostream>
#include<string>
#include "enc_dec.h"
#include<ctime>
using namespace std;

int main(){
    srand(time(0)); 
    generateMapping();
    char choice;
    cout << "Enter [D : Decryptions / E : Encryption ]  :";
    cin >> choice;
    string sen;
    string enc_sen = "";
    string dec_sen = "";
    if(toupper(choice) == 'D'){
        cout << "What String do tou want to Decryption :";
        cin >> sen;
        enc_sen = monoDecrypt(sen);
        cout << "Original : " << sen << "\n";
        cout << "Encrypted: " << enc_sen << "\n";
    }
    else if(toupper(choice) =='E'){
        cout << "What String do you want to Encryption :";
        cin >> sen;
        dec_sen = mono(sen);
        cout << "Original : " << sen << "\n";
        cout << "Decrypted: " << dec_sen << "\n";
    }
    else{
        cout << "no command";
        exit(1);
    }
    
    return 0;
}