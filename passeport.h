#include <string>
using namespace std;

class Personne; //déclaration de l'existence de la classe Personne 

class Passeport
{
private:
    string numero, nationalite, dateExpiration;
    Personne * leProprietaire;

public:
    Passeport(string leNumero, string laNationalite, string laDateExpiration);
    string getNumero() { return this->numero; }
    string getNationalite() { return this->nationalite; }
    string getDateExpiration() { return this->dateExpiration; }
    Personne * getProprietaire() {return this->leProprietaire; }
    void setProprietaire(Personne *nouveauProprio) {this->leProprietaire = nouveauProprio; }
};