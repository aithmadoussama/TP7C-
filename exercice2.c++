#include <iostream>
#include <vector>
#include <string>
using namespace std;

class article {
public:
    string nom;
    double prix;
    int quantite;
    double tva;

    article(string n, double p, int q = 1, double t = 0.0) {
        nom = n;
        prix = p;
        quantite = q;
        tva = t;
    }
};

class facture {
private:
    vector<article> articles;

public:
    void ajouterarticle(string n, double p) {
        articles.push_back(article(n, p));
    }

    void ajouterarticle(string n, double p, int q) {
        articles.push_back(article(n, p, q));
    }

    void ajouterarticle(string n, double p, int q, double t) {
        articles.push_back(article(n, p, q, t));
    }

    void affichertotal() {
        double total = 0;
        for (auto &a : articles) {
            total += a.prix * a.quantite * (1 + a.tva/100);
        }
        cout << "le prix total de votre articles est  : " << total << endl;
    }
};

int main() {
    facture f;

    f.ajouterarticle("stylo", 2.5);
    f.ajouterarticle("cahier", 5.0, 3);
    f.ajouterarticle("sac", 50.0, 2, 20);

    f.affichertotal();

    return 0;
}
