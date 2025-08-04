#include "enc_dec.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>

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
    int n = input.length(); 
    for(int i = 0;i<26;i++){
        cout << "Formation " << i <<" "; 
        for(int j = 0 ; j<n;j++){
            char c = input[j];
            if(isalpha(c)){
                char base = isupper(c) ? 'A' : 'a';
                cout << char((c - base - i + 26 )%26 + base);
                                            // + 26 to turn number positive
            }
            else{
                cout<<c;
            }
        }
        cout<<endl;
    }
    return "success";
}

bool checker_in_vector(vector<char> &memo,string input){
    for(int i = 0 ; i < string.length(); i++){
        for(int j = 0 ; j < 26 ; j++ ){
            
        }
    }
}

string mono(string input){
    vector<char> memo (26);
    srand(26);
    
    for(int i =0;i < input.length();i++){
        
    }
    return "success";
}