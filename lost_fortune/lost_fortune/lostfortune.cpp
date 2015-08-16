#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	//Get info
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure"<<endl;

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	//Tell the story

	cout << "\nAbrave group of " << adventurers << " set out on a quest ";
	cout << "- in search of the lot treasure of the Ancient Dwarves. ";
	cout << "The group was led by the legendary rouge, " << leader << ". \n";
	
	cout << "\nAlong the way, a band of maurading ogres ambushed the party. ";
	cout << "All fought bbravely under the command of " << leader;
	cout << ", and the ogres was defeated, but at a cost. ";
	cout << "Of the adventurees, " << killed << "erer vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";
	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the burried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces. ";
	cout << leader << " held on to the extra " << (GOLD_PIECES%survivors);
	cout << " pieces to keep things fair of course.\n";


	return 0;
}