#include <iostream>
#include <cstring>

using namespace std;

bool sub(char* s, char* n) {
	for (int i = 0; *(s+i) != '\0'; ++i) {

		if (*(s+i) == *n) {
			for (int j = 0; *(s+(i+j)) == *(n+j); ++j) {

				if (*(n+(j+1)) == '\0') {
					return true;
				}

			}
		}

	}
}

int main() {
	char* a = "Hello world!";
	char* b = "llo";
	char* c = "Hi";

	cout << sub(a, b) << " " << sub(a, c);
}