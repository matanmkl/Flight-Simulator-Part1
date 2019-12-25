//
// Created by sapir on 16/12/2019.
//

#ifndef EX1_LEXER_H
#define EX1_LEXER_H

#include <stdio.h>
#include <string>
#include <fstream>
#include <list>
#include <vector>

using namespace std;

class Lexer {
    string path;
    vector<string> commandsList;
public:
    Lexer(const string &path);

    vector<string> splitString(string source, const string &delimiter);

    string subString(string source, string del_1, string del_2);

    vector<string> lexering();

    string getString(char x);

    void loop(ifstream &in_file, string line);

    void lexLine(ifstream &in_file, string line);

    bool funcOrNot(string source);

    string eraseParameters(string source);

    void func(ifstream &in_file, string line);

private:
    string trimChar(string source, const char c);
};


#endif //EX1_LEXER_H
