#include<iostream>
#include<string>
#include "enc_dec.h"
#include<ctime>
using namespace std;

int main(){
    srand(time(0)); 
    generateMapping();
    char choice;
    cout << "Enter [D : Decryptions / E : Encryption ]";
    cin >> choice;
    string sen;
    if(isupper(choice) == 'D'){
        cout << "What String do tou want to Decryption";
        cin >> sen;
        string enc = mono(sen);
        
    }
    else if(isupper(choice) =='E'){
        cout << "What String do you want to Encryption";
        cin >> sen;
        string dec = monoDecrypt(sen);

    }
    else{
        cout << "no command";
        exit();
    }

    cout << "Original : " << sen << "\n";
    cout << "Encrypted: " << enc << "\n";
    cout << "Decrypted: " << dec << "\n";
    
    return 0;
}