#include <iostream>
#include <string>
#include "english.cpp"

using namespace std;


int main (){
	
	string input;
	string output;
	
	cout<<"give the text you want to encrypt : ";
	getline(cin, input);
	

	output = english(input);
	
	
	cout << output;
	
	
	
	return 0;
	
}
