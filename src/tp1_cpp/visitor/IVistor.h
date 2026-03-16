#pragma once

// Forward declarations
class Fleur;
class Arbre;
class ChampignonAdapter;

/**
 * @brief Interface pour le pattern Visitor
 * Permet d'ajouter de nouvelles opérations sur les végétaux sans modifier leurs classes
 */
class IVisitor
{
public:
	virtual ~IVisitor() = default;

	virtual void visit(const Fleur& fleur) = 0;
	virtual void visit(const Arbre& arbre) = 0;
	virtual void visit(const ChampignonAdapter& champignon) = 0;
};
