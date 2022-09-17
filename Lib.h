#ifndef __LIBRARY_H
#define __LIBRARY_H
#include <iostream>
#include <string.h>

using namespace std;

class SoPhuc {
private:
    int ireal;
    int icomp;
public:
    int imodule() {
        return (ireal * ireal) + (icomp * icomp);
    }
    void setReal(int a);
    friend istream& operator >> (istream& in, SoPhuc&);
    friend ostream& operator << (ostream& out, SoPhuc);
    friend bool operator > (SoPhuc, SoPhuc);
    friend SoPhuc operator + (SoPhuc, SoPhuc);
    SoPhuc operator - (SoPhuc another);
    SoPhuc operator * (SoPhuc another);
    SoPhuc operator / (SoPhuc another);
};
#endif