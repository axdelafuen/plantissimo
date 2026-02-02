#pragma once

#include <tp1_cpp/Vegetal.hpp>

class Fleur: public Vegetal
{
    public:
        Fleur(float max);
        void croissance() override;
    private:
        float tailleMax;
};
