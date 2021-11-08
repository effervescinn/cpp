#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while(this->materias[i] && i < 4)
		i++;
	if (i == 4)
		return ;
	else
		this->materias[i] = m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (this->materias[i] && i < 4)
	{
		if (this->materias[i]->getType() == type)
			return this->materias[i]->clone();
		i++;
	}
	return NULL;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    for (int i = 0; i< 4; i++)
    {
        delete this->materias[i];
        this->materias[i] = rhs.materias[i];
    }
    return *this;
}
