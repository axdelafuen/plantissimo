#include "Arbre.hpp"
#include "visitor/IVistor.h"

#include "strategie/ICroissance.hpp"

#include <string>

void Arbre::croissance()
{
	if (mStrategieCroissance)
	{
		setTaille(mStrategieCroissance->nouvelleTaille(getTaille()));
	}
	else
	{
		// Fallback par defaut
		setTaille(getTaille() + 1.);
	}
}

std::string Arbre::getType() const
{
	return "Arbre";
}

void Arbre::setStrategieCroissance(ICroissance* croissance)
{
	mStrategieCroissance = croissance;
}

void Arbre::accept(IVisitor& visitor) const
{
	visitor.visit(*this);
}

