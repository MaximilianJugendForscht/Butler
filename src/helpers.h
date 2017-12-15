#include <string>


void speak (std::string text) {
	std::string command ("espeak '" + text + "' -a 500");
	system(command.c_str());
}