#include "enc_dec.h"
#include <bits/stdc++.h>


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






vector<int> encMapUpper(26, -1);
vector<int> encMapLower(26, -1);


void generateMapping() {
    vector<char> lettersUpper(26), lettersLower(26);
    iota(lettersUpper.begin(), lettersUpper.end(), 'A'); 
    iota(lettersLower.begin(), lettersLower.end(), 'a'); 

    
    random_shuffle(lettersUpper.begin(), lettersUpper.end());
    random_shuffle(lettersLower.begin(), lettersLower.end());

    for (int i = 0; i < 26; i++) {
        encMapUpper[i] = lettersUpper[i];
        encMapLower[i] = lettersLower[i];
    }
}


string mono(string input) {
    string newString = "";
    for (char c : input) {
        if (isupper(c)) {
            newString += char(encMapUpper[c - 'A']);
        } else if (islower(c)) {
            newString += char(encMapLower[c - 'a']);
        } else {
            newString += c;
        }
    }
    return newString;
}


string monoDecrypt(string input) {
    vector<int> decMapUpper(26, -1), decMapLower(26, -1);
    for (int i = 0; i < 26; i++) {
        decMapUpper[encMapUpper[i] - 'A'] = 'A' + i;
        decMapLower[encMapLower[i] - 'a'] = 'a' + i;
    }

    string newString = "";
    for (char c : input) {
        if (isupper(c)) {
            newString += char(decMapUpper[c - 'A']);
        } else if (islower(c)) {
            newString += char(decMapLower[c - 'a']);
        } else {
            newString += c;
        }
    }
    return newString;
}
