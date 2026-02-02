#pragma once

#include "IFactory.hpp"

class VegetalBaseFactory : public IFactory
{
    public:
        std::unique_ptr<vegetal> creerVegetal(std::string ligne) override;
}
