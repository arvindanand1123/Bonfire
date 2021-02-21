#include "lexer.h"

using namespace std;

lexer::lexer(FILE * file_ptr){
    char read;
	while((read = fgetc(file_ptr)) != EOF){
        if(debug){
            string s(1, read);
            cout << s;
            cout << "|";
        }
        

	}
}
