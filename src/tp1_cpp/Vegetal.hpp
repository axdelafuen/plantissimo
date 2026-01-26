#pragma once

class Vegetal
{
    public:
        virtual void croissance() = 0;
        float getTaille();
    protected:
        void setTaille(float taille);
    private:
        float mTaille = 0;
};
