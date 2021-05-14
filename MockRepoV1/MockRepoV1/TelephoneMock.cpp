#include "TelephoneMock.h"

Telephone TelephoneMock::next()
{
	int index = _rng.nextInt(_supportedNetworks.size() - 1);
	MobileNetwork network = _supportedNetworks[index];

	vector<string> prefixes = network.prefixes();
	index = _rng.nextInt(prefixes.size() - 1);
	string prefix = prefixes[index];

	string numbers;
	for (int i = 0; i < 7; i++)
	{
		int temp = _rng.nextInt(9);
		numbers += to_string(temp);
	}

	Telephone result(network, prefix, numbers);
	return result;
}

TelephoneMock::TelephoneMock()
{
	_supportedNetworks.push_back(MobileNetwork("Viettel", { "086", "096", "097", "098", "032", "033", "034", "035", "036", "037", "038", "039" }));
	_supportedNetworks.push_back(MobileNetwork("Vinaphone", { "088", "091", "094", "083", "084", "085", "081", "082" }));
	_supportedNetworks.push_back(MobileNetwork("Mobiphone", { "089", "090", "093", "070", "079", "077", "076", "078" }));
	_supportedNetworks.push_back(MobileNetwork("Vietnamobile", { "092", "056", "058" }));
	_supportedNetworks.push_back(MobileNetwork("GMobile", { "099", "059" }));
	_supportedNetworks.push_back(MobileNetwork("Itelecom", { "087" }));
}
