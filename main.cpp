#include <iostream>
#include <string>
using namespace std;
int main()
{
    const string parol="xayr2003", login="301211100310";
    string parol1,login1;
    bool boolean;
    cout << "Login :";
    cin >> login1;
    cout << "Parol :";
    cin >> parol1;
    boolean=(parol1==parol && login1==login);
    while (boolean<1) {
      cout << "Siz kiritgan login yoki parol xato.";
      cout << "\nLogin :";
      cin >> login1;
      cout << "Parol :";
      cin >> parol1;
      boolean=(parol1==parol && login1==login);
      if (boolean==1) {
        cout << "Siz tizimga muvaffaqiyatli kirdingiz."; break;
      }
    }
    return 0;
}
