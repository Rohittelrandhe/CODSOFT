#include <iostream>
#include<conio.h>
#include <cstdlib>
using namespace std;

int main()
{
	int number,guess,tries=0;
	number = rand() % 100 + 1;
	cout << "Number Guessing Game"<<"\n"<<"\n";

	do
	{
		cout<<"Enter a guess between 1 and 100: ";
		cin>>guess;
		tries++;

		if (guess>number){
			cout<<"Too high!"<<"\n"<<"\n";
		}
		else if (guess<number){
			cout<< "Too low!"<<"\n"<<"\n";
		}
		else{
			cout<<"\nCorrect!! You got it in "<<tries<<" guesses";
		}
	} while (guess!=number);

	// return 0;
}