#ifndef ENC_DEC_H
#define ENC_DEC_H

#include <string>
using namespace std;


string enc(string input);
string dec(string input);
void generateMapping();
string mono(string input);
string monoDecrypt(string input);
#endif