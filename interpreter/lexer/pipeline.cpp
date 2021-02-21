/**
 * Author: Arvind Anand
 * 
 * Bonfire Interpreter v1:
 * Must translate basic variable statements, type checking, perform arithmetic operations,
 * and GoTo style loops
 * 
 */

#include "lexer.h"


using namespace std;


int main(int argc, char **argv){
    // verify the correct number of parameters
    if ( argc != 2 ) {
        cout << "Must supply the input file name as the only parameter" << endl;
        exit(1);
    }

	FILE * file_ptr = fopen(argv[1], "r");
    lexer lex(file_ptr);
    return 0;
}