#include <iostream>
#include <string>
#include <vector>
#include <fstream>
//#include "comp.h"

using namespace std;


int main(int argc, char* argv[]) {
	if(argc != 4) {
		cerr << "ERROR: Expected -{MODE} $SOURCE_NAME $DESTINATION_NAME" << endl;
        return 1;
	}
/*	switch(argv[1]){
		case c:
			std::cout << "compressing " << argv[2] << std::endl;
			break;
		case u:
			std::cout << "decompressing " << argv[2] << std::endl;
			break;
		case h:
			std::cout << "Help? There is no help\n";
			break;
		default:
			std::cout << "I have no idea what that means\n";
			break;
	}

*/
	fstream source, destination;
	source.open (argv[2], fstream::in);

	if(source.is_open()){
		cout << argv[2] << " succesfully opened\n";
		source.close;
	} else {
	cerr << "ERROR: unable to open source file" << endl;
	return 1;
	}
	
}