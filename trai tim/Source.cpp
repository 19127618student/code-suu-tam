#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void copy(fstream& in, fstream& out, int n) {
	char buff[1000];
	
		in.read(buff, n);
		out.write(buff, n);
	
}

int main(int argc, char* argv[10]) {

	/*char inputpath[100];
	char outputpath[100];

	strcpy(inputpath, argv[1]);
	strcpy(outputpath, argv[2]);

	cout << inputpath << endl << outputpath << endl;*/

	fstream in("D:/input.txt", ios::binary | ios::in);
	fstream out1("D:/output1.txt", ios::binary | ios::out);
	fstream out2("D:/output2.txt", ios::binary | ios::out);
	if (!in.is_open()) {
		cout << "\nCan't open.";
	}
	else {
		copy(in, out1, 500);
		copy(in, out2, 600);
		cout << "\nDONE!";
		in.close();
		out1.close();
		out2.close();
	}
	return 0;
}