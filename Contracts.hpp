#ifndef __CONTRACTS_H
#define __CONTRACTS_H

#include <string>
#include <vector>
using namespace std;

typedef enum{_BOOL, _INT, _BYTE, _STRING, _VOID} varType;
typedef enum{_FUNC, _IF, _WHILE, _CASE} scopeType;

typedef struct funcType{
    retType;
    map<varType,string> args;
};

typedef vector<varType> expList;

typedef struct varData{
    int numVal;
    string stringVal;
    bool boolVal;
    string varName;
    varType type;
    funcType func;
    expList expTypes;
}STYPE;


#define YYSTYPE STYPE

#endif