#include <iostream>
#include <list>
using namespace std;

class GitHubChannel {
private:
	string name;
	string ownerName;
	int contributorsCount;
	list<string> publicRepositories;

public:
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
	void contribute() {
		contributorsCount++;
	}
	void uncontribute() {
		if (contributorsCount > 0)
			contributorsCount--;
	}
	void addRepository(string repository) {
		publicRepositories.push_back(repository);
	}
};

int main() 
{
	GitHubChannel ghChannel("anna-sobanska", "Anna Sobanska");
	ghChannel.addRepository("Hello");
	ghChannel.addRepository("Calculator");
	ghChannel.addRepository("Game");
	ghChannel.contribute();
	ghChannel.contribute();
	ghChannel.uncontribute();

	ghChannel.getInfo();

	system("pause>0");
}