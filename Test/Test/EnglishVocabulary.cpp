#include "W1.h"

int EnglishVocabulary()
{
    cout << "===============English Vocabulary===============" << endl;
    cout << "Nhan Enter de tao ra 1 tu tieng anh. Nhan phim khac de ket thuc.\n";
    vector <string> eng = { "book", "desk", "pencilcase", "ruler", "eraser", "pen", "pencil", "chair", "board", "notebook" };
    vector <string> vie = { "sach", "ban hoc", "hop but", "thuoc", "cuc tay", "but bi", "but chi", "ghe", "bang", "quyen vo" };
    while (_getch() == '\r')
    {
        int randomindex = rand() % eng.size();
        cout << eng[randomindex] << ": " << vie[randomindex] << endl;
    }
    return 0;
}
