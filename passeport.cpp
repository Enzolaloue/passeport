#include "passeport.h"

Passeport::Passeport(string leNumero, string laNationalite, string laDateExpiration)
{
    this->numero = leNumero;
    this->nationalite = laNationalite;
    this->dateExpiration = laDateExpiration;
}