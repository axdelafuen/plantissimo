#pragma once

#include "Vegetal.h"

#include <vector>
#include <fstream>
#include <sstream>

class Terrain
{
    public:
        std::vector<Vegetal> getVegetaux();
        void charger(const std::string& filePath);
    private:
        std::vector<Vegetal> _vegetaux;
}
