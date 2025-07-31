#include "enc_dec.h"
#include <string>
#include <iostream>
using namespace std;

string enc(string input){
    int n = input.length(); 
    for(int i = 0;i<26;i++){
        cout << "Formation " << i <<" "; 
        for(int j = 0 ; j<n;j++){
            char c = input[j];
            if(isalpha(c)){
                char base = isupper(c) ? 'A' : 'a';
                cout << char((c - base + i)%26 + base); 
            }
            else{
                cout<<c;
            }
        }
        cout<<endl;
    }
    return "success";
}
string dec(string input){
    return "success";
}