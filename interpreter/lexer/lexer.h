#ifndef LEXER_H
#define LEXER_H

#include <map>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

class lexer{
    public:
        lexer(FILE * file_ptr);
        void ch_debug(bool val);

    private:
        map <string, string> valid_tokens;
        bool debug=false;
        

};


#endif