//
//  RSLogger.h
//  myLogger
//
//  Created by Руслан on 16.03.15.
//
//

#ifndef __myLogger__RSLogger__
#define __myLogger__RSLogger__

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <assert.h>
using namespace std;

#endif /* defined(__myLogger__RSLogger__) */

enum logLevel{
    RSRELEASE,
    RSDEBUG,
    RSALL
};


void setLogLevel(int level);
void ERROR(FILE* mysource, char myError[]);
void WARNING(FILE* mysource, char myError[]);
void INFO(FILE* mysource, char myError[]);