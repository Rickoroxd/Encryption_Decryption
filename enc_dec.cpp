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





// for monoalphabetic substitution cipher
vector<int> encMapUpper(26, -1);
vector<int> encMapLower(26, -1);

string mono(string input){
    string newString = "";
    for(int i = 0;i<input.length();i++){
        if(isalpha(input[i])){
            if(isupper(input[i])){
                int index = input[i] - 'A';
                if(encMapUpper[index] == -1){
                    encMapUpper[index] = (rand()%26) + 'A';
                }
                newString += char(encMapUpper[index]);
            }
            else{
                int index = input[i] - 'a';
                if(encMapLower[index] == -1){
                    encMapLower[index] = (rand() % 26) + 'a';
                }
                newString+=char(encMapLower[index]);
            }
        }
        else{
            newString+= input[i];
        }
    }
    return newString;
}


string monoDecrypt(string input) {
    vector<int> decMapUpper(26, -1);
    vector<int> decMapLower(26, -1);

    // สร้าง reverse mapping
    for (int i = 0; i < 26; i++) {
        if (encMapUpper[i] != -1)
            decMapUpper[encMapUpper[i] - 'A'] = 'A' + i;
        if (encMapLower[i] != -1)
            decMapLower[encMapLower[i] - 'a'] = 'a' + i;
    }

    string newString = "";
    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {
            if (isupper(input[i])) {
                newString += char(decMapUpper[input[i] - 'A']);
            } else {
                newString += char(decMapLower[input[i] - 'a']);
            }
        } else {
            newString += input[i];
        }
    }
    return newString;
}