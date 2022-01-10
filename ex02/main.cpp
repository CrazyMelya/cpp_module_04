#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	Dog			*dog = new Dog();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	Animal *somebody = new Dog(*dog);
	delete somebody;
	delete dog;

	Animal *animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat;
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog;

	animals[0]->makeSound();

	for (int i = 0; i < 10; i++)
		delete animals[i];

	// Animal an;

	while (1);

}
