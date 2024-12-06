#include <string>
using namespace std;

class Passeport;

class Personne
{
private:
    string nom, prenom, dateNaissance;
    Passeport *lePasseport;
public:
    Personne(string leNom, string lePrenom, string laDateNaissance);
    string getNom() { return this->nom; }
    string getPrenom() { return this->prenom; }
    string getDateNaissance() { return this->dateNaissance; }
    void ajouterPasseport(Passeport * nouveauPasseport);
    Passeport* getPasseport() {return lePasseport;}
};