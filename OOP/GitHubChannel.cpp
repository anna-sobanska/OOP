#include <iostream>
#include <list>
using namespace std;

class GitHubChannel {
public:
	string name;
	string ownerName;
	int contributorsCount;
	list<string> publicRepositories;

	GitHubChannel (string name, string ownerName){
		name = name;
		ownerName = ownerName;
		contributorsCount = 0;
	}

	void getInfo() {
		cout << "Name: " << name << endl;
		cout << "Owner Name: " << ownerName << endl;
		cout << "Contributors Count: " << contributorsCount << endl;
		cout << "Repositories: " << endl;
		for (string publicRepository : publicRepositories)
			cout << publicRepository << endl;
	}
};

int main() 
{
	GitHubChannel ghChannel("anna-sobanska", "Anna Sobanska");
	ghChannel.publicRepositories.push_back("Hello");
	ghChannel.publicRepositories.push_back("Calculator");
	ghChannel.publicRepositories.push_back("Game");

	ghChannel.getInfo();

	system("pause>0");
}