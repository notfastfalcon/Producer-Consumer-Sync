#include "iostream"
#include "string.h"
#include "queue"
#include "pthread.h"
#include "bits/stdc++.h"
#include "header.h"
using namespace std;

int main (int argc, char *argv[]) {
	//defaults values
	int nthreads = 0, tid = 0;
	string outFile = "prodcon.log";

	//raising error if arguments are incorrect
	if(argc < 2 || argc > 3) {
		cout << "Enter valid arguments!\n";
		exit(0);
	}

	nthreads = atoi(argv[1]);
	if (argc == 3) {
		tid = atoi(argv[2]);
	}

	if (tid != 0) {
		outFile = "prodcon." + to_string(tid) + ".log";
	}
	loggedToFile(outFile);

	//consumer();

	return 0;
}