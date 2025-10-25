#include <iostream>
#include <string>
using namespace std;

class comptebancaire {
private:
    double solde;
    string code;

public:
    comptebancaire() {
        solde = 0;
        code = "0000";
    }

    comptebancaire(double s) {
        solde = s;
        code = "0000";
    }

    void affichersolde() {
        cout << "solde : " << solde << endl;
    }

    void retrait(double montant) {
        if(montant <= solde) {
            solde -= montant;
            cout << "retrait effectue : " << montant << endl;
        } else {
            cout << "solde insuffisant" << endl;
        }
    }

    void retrait(double montant, string c) {
        if(c != code) {
            cout << "code incorrect" << endl;
        } else if(montant > solde) {
            cout << "solde insuffisant" << endl;
        } else {
            solde -= montant;
            cout << "retrait effectue : " << montant << endl;
        }
    }
};

int main() {
    comptebancaire c1;
    comptebancaire c2(500);

    c2.affichersolde();

    c2.retrait(100);
    c2.affichersolde();

    c2.retrait(50, "1234");
    c2.affichersolde();

    c2.retrait(50, "0000");
    c2.affichersolde();

    return 0;
}
