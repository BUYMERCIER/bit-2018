#include "ex16_2.h"
namespace MNS = MyNamespace;

void byScope(){
    MNS::f();
}

void byDirective(){
    using namespace MNS;
    g();
}

int main(){
    byScope();
    byDirective();
}