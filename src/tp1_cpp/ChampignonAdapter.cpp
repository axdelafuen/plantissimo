#include "ChampignonAdapter.hpp"

ChampignonAdapter::ChampignonAdapter(Champignon& champignon)
    :_champignon(std::move(champignon))
{}

double ChampignonAdapter::getTaille() const
{
    return _champignon->getHauteurChampignon();
}

void ChampignonAdapter::croissance()
{
    _champignon->pousse(ChampignonAdapter::Meteo::Soleil);
}

std::string ChampignonAdapter::getType()
{
    return "Champignon";
}
