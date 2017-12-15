#include <iostream>
#include <time.h>
#include "helpers.h" 
#include <chrono>
#include <thread>

using namespace std;

void pause () {
    std::this_thread::sleep_for(180s);
	srand (time(NULL));
	if (rand() % 240 < 10) {
		speak ("Go ahead and pause");
		cout << "asked to pause" << endl;
    	this_thread::sleep_for(500s); //grants 500 seconds of pause. 
		cout << "pause finished" << endl;
	}
	pause (); 
}

int main () {
	cout << "succesfully started!" << std::endl;
	speak ("succesfully started");
	pause ();
}
