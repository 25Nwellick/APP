//
#include <windows.h>
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>


int main()
{
	std::cout << "Please create your account " << std::endl;

	std::string accountname;
	std::string password;

	getline(std::cin, accountname);

start:
	while (password.length() > 10 || password.length() < 5)
	{
		std::cout << "The password must be between 5 and 10 characters.Include an UpperLetter" << std::endl;
		std::cin >> password;
	}

	bool foundUpperLetter = false;
	for (int x = 0; x <= password.length(); x++)
	{
		if (foundUpperLetter == true)


			if (password[x] >= 'A' / 65 && password[x] <= 'Z' / 90)
				foundUpperLetter = true;

		std::vector<int> grades;
		std::vector<std::string> classes{ "Math", "Biology", "Chemistry"," Physics", "Geography", "Macedonian", "English", "French", "Art", "Music", "History", "P.E", "Programming" };
		std::string temp;

		for (std::string str : classes)
		{

			std::cout << "Enter grades for " + str + ": ";
			std::cin >> temp;
			grades.push_back(std::stoi(temp));

		}

		double GPA = 0;

		for (int grade : grades) {
			GPA += grade;

		}

		GPA /= classes.size();
		std::cout << "gpa: " << GPA << "\n";

		if (GPA <= 3)
			std::cout << "Damn, you must avoid studying,because you're going to korchagin i do recommend you to start otherwise your education is useless,thank you for your time" << std::endl;
		break;
		if (GPA >= 3 && GPA <= 4)
			std::cout << " Things sometimes happen dude,hopefully you can get to a 4.5" << std::endl;
		if (GPA >= 4.5)
			int a;
		int b = 0;
		std::cin >> a;
		std::string url;
		std::cout << "Enter url: ";
		std::cin >> url;
		std::cout << "how many times do you want to open the url?: ";
		std::cin >> a;
		while (b < a)
		{
			ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
			b++;
		}

		//tuka sakam da vmetnam ShellExecute ama poradi nekoja pricina mi dava preku 100 errors





	}
	if (!foundUpperLetter)
	{
		std::cout << "You did not include an uppercase letter in your input. Please try again." << std::endl;
		goto start; 
	}
	
	
	}
	

	
	


