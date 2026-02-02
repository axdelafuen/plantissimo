#include "Terraing.hpp"

std::vector<Vegetal> Terrain::getVegetaux()
{
    return _vegetaux;
}

void Terrain::charger(const std::string& filePath)
{
    std::ifstream infile(filePath);

    std::string line;
    while (std::getline(infile, line))
    {
        // foreach Factory
        auto factory = VegetalBaseFactory();
        auto newVegetal = factory.creerVegetal(line);
        _vegetaux.push_back(newVegetal);
    }
}

