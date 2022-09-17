#include "Lib.h"

istream& operator >> (istream& in, SoPhuc& a) {
    cout << "Nhap phan thuc: ";
    in >> a.ireal;
    cout << "Nhap phan ao: ";
    in >> a.icomp;
    return in;
}
ostream& operator << (ostream& out, SoPhuc a) {
    cout << a.ireal << " + i*" << a.icomp << endl;
    return out;
}
SoPhuc operator + (SoPhuc a, SoPhuc b) {
    SoPhuc t;
    t.ireal = a.ireal + b.ireal;
    t.icomp = a.icomp + b.icomp;
    return t;
}
SoPhuc sum(SoPhuc a, SoPhuc b) {
    SoPhuc s = a + b;
    return s;
}
SoPhuc SoPhuc::operator - (SoPhuc another) {
    SoPhuc a;
    a.ireal = this->ireal - another.ireal;
    a.icomp = this->icomp - another.icomp;
    return a;
}
SoPhuc SoPhuc::operator * (SoPhuc another) {
    SoPhuc a;
    a.ireal = this->ireal * another.ireal - this->icomp * another.icomp;
    a.icomp = this->ireal * another.icomp + this->icomp * another.ireal;
    return a;
}
bool operator > (SoPhuc a, SoPhuc b) {
    return a.imodule() > b.imodule();
}