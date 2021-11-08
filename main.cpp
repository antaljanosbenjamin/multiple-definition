#include "libB.hpp"
#include "libBSub.hpp"
#include "libA.hpp"

int main() {
    NotClashingFunctionB();
    NotClashingFunctionA();
    ClashingFunction();
    return 0;
}