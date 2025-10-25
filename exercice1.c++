#include <iostream>
#include <string>
using namespace std;

class contact {
private:
    string nom;
    string telephone;
    string email;

public:
    contact(string n) {
        nom = n;
        telephone = "non renseigne";
        email = "non renseigne";
    }

    contact(string n, string t) {
        nom = n;
        telephone = t;
        email = "non renseigne";
    }

    contact(string n, string t, string e) {
        nom = n;
        telephone = t;
        email = e;
    }

    void afficher() {
        cout << "nom : " << nom << endl;
        cout << "telephone : " << telephone << endl;
        cout << "email : " << email << endl;
    }
};

int main() {
    contact c1("oussama");
    contact c2("walid", "0601020304");
    contact c3("khalid", "0605060708", "khalid@email.com");

    cout << "--- contact 1 ---" << endl;
    c1.afficher();

    cout << "\n--- contact 2 ---" << endl;
    c2.afficher();

    cout << "\n--- contact 3 ---" << endl;
    c3.afficher();

    return 0;
}
