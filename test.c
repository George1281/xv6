#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
//    hello();
    int hi =2 ;
    int* ptr = & hi;
    wait(ptr);
    exitStat(20);
}