#include <memory>
#include "unique_ptr.h"

int main()
{
	// New empty scope to allocate entity
	{
		std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // Call constructor

		// Access the function
		entity->Test();
	}
	// When we put breakpoint at line 11
	// It shows create entity
	// When we put breakpoint out of scope
	// It shows delete entity
	
}