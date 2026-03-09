#include "Vegetal.hpp"
#include "Champignon.hpp"
#include <memory>
#include <string>

class ChampignonAdapter : public Vegetal {
    public:
        ChampignonAdapter(std::uniqueèptr<Champignon> champignon);
        double getTaille() const override;
        void croissance();
        std::string getType();

    protected:
        void setTaille(double taille) override;

    private:
        Champignon _champignon;
};
