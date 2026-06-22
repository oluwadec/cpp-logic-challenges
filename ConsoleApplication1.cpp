#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;
int main() { 
string name; 
int age;     
float number;
string club;
string answer;
cout << "what is your name?" << endl;  
getline(cin, name);
cout << " Hello " << name << "!" << endl; 
cout << "how old are you?" << endl; 
cin >> age; 

		if (age >= 18)
		  {
			cout << "you are an adult." << endl;
		  }

		else
		  {
			cout << " you are a minor " << endl;
		  }

		cout << " what is 1 divided by 2 ?" << endl;

		cin >> number;

		if (number >= 0.49 && number <= 0.51)
		  {
			cout << " Nice!," << number << " that is accurate GENIUS:)" << endl;
		  }
		else
		  {
			cout << "WRONG!" << endl;
			cout << " youre not smart, go and read " << endl;
		  }

		cin.ignore();

		cout << " Which club do you support?" << endl;

		getline(cin, club);

		transform(club.begin(), club.end(), club.begin(), ::tolower);

		if (club == "arsenal" || club == "arsenal fc")
		  {
			cout << "COYG!!!!, we suport the same club " << endl;
			cout << club << " is a good football club to support " << endl;
		  }

		else if (club == "tottenham")
		  {
			cout << "BOOO Tottenham!" << endl;
		  }
		else if (club == "chelsea")
		  {
			cout << "BOOO Chelsea!" << endl;
		  }
		else

		  {
			cout << " Interesting Choice " << endl;
		  }
		cout << "can you code ?" << endl;
		cin >> answer;

		if (answer == "yes");
		  {
			cout << " chai " << endl;
		  }
		

		  
		system("pause");
		return 0;
	}