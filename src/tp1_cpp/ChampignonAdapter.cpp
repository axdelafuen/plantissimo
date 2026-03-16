#include "ChampignonAdapter.hpp"

ChampignonAdapter::ChampignonAdapter(std::unique_ptr<Champignon> champignon)
    :_champignon(std::move(champignon))
{}

double ChampignonAdapter::getTaille() const
{
    return _champignon->getHauteurChampignon();
}

void ChampignonAdapter::croissance()
{
    _champignon->pousse(Champignon::Meteo::Soleil);
}

std::string ChampignonAdapter::getType() const
{
    return "Champignon";
}

void ChampignonAdapter::accept(IVisitor& visitor) const
{
    visitor.visit(*this);
}
