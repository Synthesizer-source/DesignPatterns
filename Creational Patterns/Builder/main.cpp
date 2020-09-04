#include "AssasinBuilder.h"
#include "MagicianBuilder.h"
#include "WarriorBuilder.h"
#include "CharacterCreator.h"

int main(void) {
	
	/* Assasin */
	CharacterBuilder* assasinBuilder = new AssasinBuilder();
	CharacterCreator* characterCreator = new CharacterCreator(assasinBuilder);
	characterCreator->createCharacter();
	Character* assasin = characterCreator->getCreatedCharacter(); /* Builder is builds, Director is manages*/
	assasin->print();

	/* Magician */
	CharacterBuilder* magicianBuilder = new MagicianBuilder();
	characterCreator->setCharacterBuilder(magicianBuilder);
	characterCreator->createCharacter();
	Character* magician = characterCreator->getCreatedCharacter();
	magician->print();

	/* Warrior */
	CharacterBuilder* warriorBuilder = new WarriorBuilder();
	characterCreator->setCharacterBuilder(warriorBuilder);
	characterCreator->createCharacter();
	Character* warrior = characterCreator->getCreatedCharacter();
	warrior->print();

	delete assasin;
	delete magician;
	delete warrior;
	delete assasinBuilder;
	delete magicianBuilder;
	delete warriorBuilder;
	delete characterCreator;

	return 0;
}