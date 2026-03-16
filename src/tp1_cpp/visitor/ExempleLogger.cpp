#include "Logger.h"
#include "../Fleur.hpp"
#include "../Arbre.hpp"
#include "../ChampignonAdapter.hpp"
#include "../Champignon.hpp"
#include <iostream>
#include <memory>
#include <vector>

int main()
{
	std::cout << "=== EXEMPLE D'UTILISATION DU LOGGER ===" << std::endl << std::endl;

	Fleur fleur(10.0);
	fleur.croissance();
	fleur.croissance();
	fleur.croissance();

	Arbre arbre;
	arbre.croissance();
	arbre.croissance();

	Logger logger(std::cout);

	// Utilisation du logger avec chaque végétal
	std::cout << "Logging d'une fleur:" << std::endl;
	fleur.accept(logger);

	std::cout << "\nLogging d'un arbre:" << std::endl;
	arbre.accept(logger);

	// Si ChampignonAdapter est disponible:
	// std::cout << "\nLogging d'un champignon:" << std::endl;
	// champAdapter.accept(logger);

	// Utilisation avec un vecteur polymorphique
	std::cout << "\n=== LOGGING D'UNE COLLECTION ===" << std::endl;
	std::vector<Vegetal*> jardin;
	jardin.push_back(&fleur);
	jardin.push_back(&arbre);
	// jardin.push_back(&champAdapter);

	for (const auto* vegetal : jardin)
	{
		vegetal->accept(logger);
	}

	return 0;
}
