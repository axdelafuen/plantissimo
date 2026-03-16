#pragma once

#include "IVistor.h"
#include <iostream>
#include <string>

/**
 * @brief Visiteur Logger - Affiche les informations détaillées de chaque végétal
 */
class Logger : public IVisitor
{
public:
	Logger(std::ostream& output = std::cout);

	void visit(const Fleur& fleur) override;
	void visit(const Arbre& arbre) override;
	void visit(const ChampignonAdapter& champignon) override;

private:
	std::ostream& mOutput;
	void logSeparator();
};
