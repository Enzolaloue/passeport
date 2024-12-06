#include <iostream>
#include <string>
#include "personne.h"
#include "passeport.h"

using namespace std;

int main()
{

    //cree une personne
    Personne toto("MENVUSSA","Gerard","02/03/2000");
    
    //cree un passeport
    Passeport pass1("12AB12345","FR","31/03/2026");
    //ajouter ce passeport a la personne
    toto.ajouterPasseport(&pass1);

    //affichage d'information
    cout<<toto.getNom()<<endl;
    cout<<toto.getPrenom()<<endl;

    cout<<toto.getPasseport()->getNumero()<<endl;
    cout<<toto.getPasseport()->getDateExpiration()<<endl;
    cout<<toto.getPasseport()->getProprietaire()->getNom();

    return EXIT_SUCCESS;
}