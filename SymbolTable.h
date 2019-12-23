//
// Created by sapir on 17/12/2019.
//

#ifndef EX1_SYMBOLTABLE_H
#define EX1_SYMBOLTABLE_H

#include "baseInclude.h"
#include "Commands/Command.h"
#include "Var.h"
#include "Client.h"

class SymbolTable {
private:
    static SymbolTable *unifiedSymbolTable;
    mutex simToVarLock;
    mutex nameToVarLock;
    map<string, Var *> nameToVar;
    map<string, Var *> simToVar;

    SymbolTable();

public:
    static SymbolTable *getSymbolTable();

    virtual ~SymbolTable();

    //todo: change return type for adders and setters to bool
    //upon success return true otherwise return false
    void addVar(string varName, string sim, string direction, float value);

    void addVar(string varName, float value);

    void addVar(string varName, string sim, string direction);

    void setVarByName(string varName, float value);

    void setVarBySim(string sim, float value);

    vector<Var *> getNameToVar();

    Var getVar(string varName);

    string varExists(string sim);


};


#endif //EX1_SYMBOLTABLE_H
