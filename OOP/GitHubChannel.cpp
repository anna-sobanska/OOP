#include <iostream>
#include <list>
using namespace std;

class GitHubChannel {
public:
	string name;
	string ownerName;
	int contributorsCount;
	list<string> publicRepositories;
};

int main() 
{
	GitHubChannel ghChannel;
	ghChannel.name = "anna-sobanska";
	ghChannel.ownerName = "Anna Sobanska";
	ghChannel.contributorsCount = 2;
	ghChannel.publicRepositories = { "Hello", "Calculator", "Game" };

	cout << "Name: " << ghChannel.name << endl;
	cout << "Owner Name: " << ghChannel.ownerName << endl;
	cout << "Contributors Count: " << ghChannel.contributorsCount << endl;
	cout << "Repositories: " << endl;
	for (string publicRepository : ghChannel.publicRepositories)
		cout << publicRepository << endl;

	system("pause>0");
}