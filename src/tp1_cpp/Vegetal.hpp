#pragma once

#include <string>

class IVisitor;

class Vegetal
{
	public:
		virtual ~Vegetal() = default;

		double getTaille() const;

		virtual void croissance() = 0;
		virtual std::string getType() const = 0;
		virtual void accept(IVisitor& visitor) const = 0;

	protected:
		void setTaille(double taille);

	private:
		double mTaille = 0;
};
