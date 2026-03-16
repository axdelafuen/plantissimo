#include "Fleur.hpp"
#include "visitor/IVistor.h"

#include <algorithm>
#include <string>

Fleur::Fleur(double tailleMax)
	: mTailleMax(tailleMax)
{
}

void Fleur::croissance()
{
	setTaille(std::min(mTailleMax, getTaille() + 0.1));
}

std::string Fleur::getType() const
{
	return "Fleur";
}

void Fleur::accept(IVisitor& visitor) const
{
	visitor.visit(*this);
}
