
#include <windows.h>
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

//imam vo plan da napravam database kadeshto ke gi imaat user podatocite na ucenicite (accounts,passwords,GPA etc) koi ke mozat da bidat povikuvani pri sekoe uklucuvanje na programata.Takashto da moze samiot ucenik samo da se logira pri sledniot pat koga ke saka da ja koristi programata.
//ova preferirano bi go napravil vo GUI 
//Bi dodal elementi kadeshto ke bide dadena opcija na ucenikot da odbere koja godina e i vrz osnova na toa da mu bidat dadeni poinakvi materijali 

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
			if (password[x] >= 'A' / 65 && password[x] <= 'Z' / 90)
				foundUpperLetter = true;

			if (foundUpperLetter == true) {

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
					std::cout << "You sure avoid studying" << std::endl;
				//planiram so sekoj tip na GPA da se otvori strana

				break;
				if (GPA >= 3 && GPA <= 4)
					std::cout << " Things sometimes happen dude,hopefully you can get to a 4.5" << std::endl;


				if (GPA >= 4.5)

					int a;

				std::string url = "https://www.youtube.com/watch?v=r5rZnu8fNGw";

				ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);

				//tuka sakam da go vmetnam ^^ ama mi dava errorsdeka se undeclared



					//Planiram i selektivno da se sporeduvaat ocenkite i da moze da mu se dade na korisnikot predmeti na koj treba da obrne povekje vnimanie i resursi koi ke mu bidat dadeni za toa


			}
	}
	if (!foundUpperLetter)
	{
		std::cout << "You did not include an uppercase letter in your input. Please try again." << std::endl;
		goto start; 
	}
	
	
	}
	

	
	


