#include "Logger.h"
#include "../Fleur.hpp"
#include "../Arbre.hpp"
#include "../ChampignonAdapter.hpp"
#include <iomanip>


Logger::Logger(std::ostream& output)
	: mOutput(output)
{
}

void Logger::logSeparator()
{
	mOutput << "----------------------------------------" << std::endl;
}

void Logger::visit(const Fleur& fleur)
{
	logSeparator();
	mOutput << "[FLEUR]" << std::endl;
	mOutput << "  Type        : " << fleur.getType() << std::endl;
	mOutput << "  Taille      : " << std::fixed << std::setprecision(2) 
	        << fleur.getTaille() << " cm" << std::endl;
	logSeparator();
}

void Logger::visit(const Arbre& arbre)
{
	logSeparator();
	mOutput << "[ARBRE]" << std::endl;
	mOutput << "  Type        : " << arbre.getType() << std::endl;
	mOutput << "  Taille      : " << std::fixed << std::setprecision(2) 
	        << arbre.getTaille() << " cm" << std::endl;
	logSeparator();
}

void Logger::visit(const ChampignonAdapter& champignon)
{
	logSeparator();
	mOutput << "[CHAMPIGNON]" << std::endl;
	mOutput << "  Type        : " << champignon.getType() << std::endl;
	mOutput << "  Taille      : " << std::fixed << std::setprecision(2) 
	        << champignon.getTaille() << " cm" << std::endl;
	logSeparator();
}
