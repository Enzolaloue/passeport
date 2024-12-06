#include "personne.h"
#include "passeport.h"

Personne::Personne(string leNom, string lePrenom, string laDateNaissance)
{
    this->nom = leNom;
    this->prenom = lePrenom;
    this->dateNaissance = laDateNaissance;
}

void Personne::ajouterPasseport(Passeport* nouveauPasseport)
{
    this->lePasseport = nouveauPasseport;
    this->lePasseport->setProprietaire(this);
}