#pragma once

# include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;


// virtual kullanımı programın işlem sırasında hangi yöntemi kullanacağına karar vermesini sağlar.
// Derlemede değil.
class AAnimal
{
public:
	AAnimal ( void );
	AAnimal ( const AAnimal &a );
	virtual ~AAnimal( void ) = 0;

	AAnimal			&operator = ( const AAnimal &a );
	virtual void	makeSound() const = 0;
	virtual string	getType() const;

protected:
	string type;

private:
};
