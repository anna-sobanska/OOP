#include <iostream>
#include <list>
using namespace std;

class GitHubChannel {
private:
	string name;
	int contributorsCount;
	list<string> publicRepositories;
protected:
	string ownerName;
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

class DevGitHubChannel:public GitHubChannel {
public:
	DevGitHubChannel(string name, string ownerName): GitHubChannel (name, ownerName){
	
	}
	void practice() {
		cout <<  ownerName <<"practicing coding, webdevelopment and design" << endl;
	}
};

int main() 
{
	GitHubChannel ghChannel("annasobanska", "Anna");
	DevGitHubChannel dghChannel("devania", "Ania");
	dghChannel.getInfo();
	dghChannel.practice();
	ghChannel.getInfo();
	
	
	system("pause>0");
}