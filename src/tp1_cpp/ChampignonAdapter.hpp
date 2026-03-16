#include "Vegetal.hpp"
#include "Champignon.hpp"
#include "visitor/IVistor.h"
#include <memory>
#include <string>

class ChampignonAdapter : public Vegetal {
    public:
        ChampignonAdapter(std::unique_ptr<Champignon> champignon);
        double getTaille() const override;
        void croissance();
        std::string getType() const override;
        void accept(IVisitor& visitor) const override;

    private:
        std::unique_ptr<Champignon> _champignon;
};
