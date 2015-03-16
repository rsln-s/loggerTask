//
//  main.cpp
//  myLogger
//
//  Created by Руслан on 16.03.15.
//
//

#include <iostream>
#include "RSLogger.h"

int main(int argc, const char * argv[]) {
    int myloglevel = RSRELEASE;
    char myerror [50] = "Smth happened";
    char mywarning [50] = "we're out of sugar";
    char myinfo [50] = "Coffee is ready";
    FILE* mylogfile;
    mylogfile = fopen("/Users/ruslan/Dropbox/MelehovaСourse/myLogger/myLogger/log.txt", "w");
    if(mylogfile != NULL){
        setLogLevel(myloglevel);
        ERROR(mylogfile, myerror);
        WARNING(mylogfile, mywarning);
        INFO(mylogfile, myinfo);
    }else assert(true);
    return 0;
}
