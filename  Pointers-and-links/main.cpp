#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int value = 8;
	int *ptrValue = &value;

	//cin >> *ptrValue;
	cout << &value << " - " << ptrValue << endl;

	return 0;
}