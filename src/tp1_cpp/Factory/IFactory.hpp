#pragma once

#include <string>
#include <memory>

class IFactory
{
    public:
        virtual std::unique_ptr<Vegetal> creerVegetal(std::string ligne) = 0;
}
