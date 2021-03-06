#include <iostream>
#include <string>
#include <stdlib.h>  
#include <time.h> 
#include <random>

int main(int argc, char** argv){
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

	std::cout << "\t\tULTIMATE PASSWORD GENERATOR V.2.3.3" << std::endl;
	std::cout << "\t\t-----------------------------------" << std::endl;
	int l;
	std::cout << "Enter password length: ";
	std::cin >> l;

	char caplet = 'y';
	std::cout << "Do you want to use capital letters? (y/n): ";
	std::cin >> caplet;
	if(caplet == 'Y' || caplet == 'y')
		alphabet += "ABCDEFGHIKLMNOPQRSTUVWXYZ";

	char nums = 'y';
	std::cout << "Do you want to use numbers? (y/n): ";
	std::cin >> nums;
	if(nums == 'Y' || nums == 'y')
		alphabet += "0123456789";

	char specsym = 'y';
	std::cout << "Do you want to use special symbols? (y/n): ";
	std::cin >> specsym;
	if(nums == 'Y' || nums == 'y')
		alphabet += "!@&?-#%*-=+/{}()[]<>.,";

	std::random_device rd;   
    std::mt19937 gen(rd());  
    std::uniform_int_distribution<> dist(0, alphabet.length());

	std::string password = "";
	for(int i(0); i < l; i++){
		password += alphabet[dist(gen)];
	}

	std::cout << "YOUR PASSWORD: " << password << std::endl;
	return 0;
} 
