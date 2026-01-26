#include "Fleur.hpp"

Fleur::Fleur(float max)
{
    tailleMax = max;
}

void Fleur::croissance()
{
    float newTaille = getTaille() + 0.1f;
    if (newTaille <= tailleMax)
        setTaille(newTaille);
    else
        setTaille(tailleMax);
}
