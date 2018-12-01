#include <iostream>
#include <fstream>

using namespace std;

int main(){

	// define your file name
	string file_name = "../bbb2CanDump.txt";

	// attach an input stream to the wanted file
	ifstream input_stream(file_name);

	// check stream status
	if (!input_stream) cerr << "Can't open input file!"<<endl;

	// one line
	string line;

	// extract all the text from the input file
	while (getline(input_stream, line)) {

			// just print out each line
			cout << line << endl;
	}

  return 0;
}
