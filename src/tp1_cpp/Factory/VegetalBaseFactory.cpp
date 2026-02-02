#include "VegetalBaseFactory.hpp"

std::unique_ptr<vegetal> creerVegetal(std::string ligne)
{
    if (ligne.compare("Fleur"))
        return make_unique<Fleur>();    
    else if (ligne.compare("Arbre"))
        return make_unique<Arbre>();
    else
        return nullptr;
}
