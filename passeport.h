#include <string>
using namespace std;

class Passeport
{
private:
    string numero, nationalite, dateExpiration;

public:
    Passeport(string leNumero, string laNationalite, string laDateExpiration);
    string getNumero() { return this->numero; }
    string getNationalite() { return this->nationalite; }
    string getDateExpiration() { return this->dateExpiration; }
};