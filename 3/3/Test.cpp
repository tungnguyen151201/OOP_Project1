#include "FullnameMock.h"
#include "BirthdayMock.h"
#include "CitizenIdMock.h"
#include "TelephoneMock.h"
#include "EmailMock.h"
#include "HcmAddressMock.h"
#include "Test.h"

void Pause()
{
    cout << "Nhan phim bat ky de tiep tuc.\n";
    char press = _getch();
    system("cls");
}
void Test()
{
    cout << "==========Fullname - Telephone - Email - Birthday - CitizenId=========" << endl; 
    Pause();
    FullnameMock nameStore; vector<Fullname> names;
    TelephoneMock telStore; vector<Telephone> tels;
    EmailMock emailStore; vector<string> emails;
    HcmAddressMock addressStore; vector<Address> addresses;
    BirthdayMock birthdayStore; vector<DateTime> birthdays;
    CitizenIdMock citizenIdStore; vector<string> citizenIds;
    Random _rng;
    vector<bool> genders;
    for (int i = 0; i < 10; i++)
    {
        //Gender
        bool male = _rng.nextInt(1);
        genders.push_back(male);
        //Full name
        Fullname name = nameStore.next(male);
        names.push_back(name);
        //Telephone
        tels.push_back(telStore.next());
        //Email
        emails.push_back(emailStore.next(name));
        //Address
        addresses.push_back(addressStore.next());
        //Birthday
        DateTime dob = birthdayStore.next();
        birthdays.push_back(dob);
        //Citizen Id
        string citizenId = citizenIdStore.next(!male, dob.Year());
        citizenIds.push_back(citizenId);
    }
    for (int i = 0; i < names.size(); i++)
    {
        cout << names[i].toString() << endl;
        cout << "Gioi tinh: ";
        if (genders[i]) cout << "Nam" << endl;
        else cout << "Nu" << endl;
        cout << "So dien thoai: " << tels[i].toString() << endl;
        cout << "Email: " << emails[i] << endl;
        cout << "Dia chi: " << addresses[i].toString() << endl;
        cout << "Ngay sinh: " << birthdays[i].toString() << endl;
        cout << "So CCCD: " << citizenIds[i] << endl;
        string c = "";
        c += citizenIds[i][0];
        c += citizenIds[i][1];
        c += citizenIds[i][2];
        cout << "Que quan: " << citizenIdStore.lookUp(c) << endl;
        cout << "========================================" << endl;
    }
}