#ifndef CHARACTER_CREATOR_H
#define CHARACTER_CREATOR_H
#include "CharacterBuilder.h"
/*
	Director class
	--> Director class, manages creation operations via Builder implemented classes.
*/
class CharacterCreator
{
private:
	CharacterBuilder* builder;
public:
	CharacterCreator(CharacterBuilder* _builder);
	void setCharacterBuilder(CharacterBuilder* _builder);
	void createCharacter();
	Character* getCreatedCharacter() const;
};
#endif // !CHARACTER_CREATOR_H



