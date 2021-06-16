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
	int contentQuality;
public:
	GitHubChannel (string name, string ownerName){
		name = name;
		ownerName = ownerName;
		contributorsCount = 0;
		contentQuality = 0;
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
	void checkAnalytics() {
		if (contentQuality < 5)
			cout << name << " has bad quality content." << endl;
		else
			cout << name << " has great quality content." << endl;
	}
};

class DevGitHubChannel :public GitHubChannel {
public:
	DevGitHubChannel(string name, string ownerName) :GitHubChannel (name, ownerName){
	
	}
	void practice() {
		cout <<  ownerName <<"practicing coding, webdevelopment and design" << endl;
		contentQuality++;

	}
};

class MathChannel :public GitHubChannel {
public:
	MathChannel(string name, string ownerName) :GitHubChannel(name, ownerName) {

	}
	void practice() {
		cout << ownerName << "practicing math, operators and integrals" << endl;
		contentQuality++;

	}
};

int main() 
{
	DevGitHubChannel dghChannel("devania", "Ania");
	MathChannel mChannel("sobaniewicz", "Soban");

	dghChannel.practice();
	mChannel.practice();
	mChannel.practice();
	mChannel.practice();
	mChannel.practice();
	mChannel.practice();

	GitHubChannel* ch1 = &dghChannel;
	GitHubChannel* ch2 = &mChannel;

	ch1->checkAnalytics();
	ch2->checkAnalytics();
	
	system("pause>0");
}