#include "EmailMock.h"

string EmailMock::next()
{
	bool male = _rng.nextInt(1) == 1;
	Fullname name = _nameStore.next(male);
	string email = next(name);
	return email;
}

string EmailMock::next(Fullname name)
{
	string last = name.lastname().substr(0, 1);
	string middle = name.middlename().substr(0, 1);
	int i = _rng.nextInt(_domains.size() - 1);
	string domain = _domains[i];
	string email = last + middle + name.firstname() + "@" + domain;
	toLowerCase(email);
	return email;
}

void EmailMock::toLowerCase(string& email)
{
	for (int i = 0; i < email.length(); i++)
	{
		if (email[i] >= 'A' && email[i] <= 'Z')
		{
			email[i] = email[i] + 32;
		}
	}
}

EmailMock::EmailMock()
{
	//_domains = { "gmail.com","microsoft.com","yahoo.com","hcmus.edu.vn","apple.com","facebook.com" };
	fstream f;
	f.open("domain.txt", ios::in);
	while (!f.eof())
	{
		string temp;
		getline(f, temp);
		_domains.push_back(temp);
	}
	f.close();
}
