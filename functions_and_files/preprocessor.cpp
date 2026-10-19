// The preprocessor includes the contents of the iostream header and processes the source file.
#include <iostream> 

// When the preprocessor encounters this directive, it associates the macro identifier with its replacement text.
#define USER "javiercodev"

#define PRINT_HELLO


int main()
{
	std::cout << USER << '\n'; 

#ifdef PRINT_HELLO
	std::cout << "Hello" << '\n'; // Will be compiled since PRINT_HELLO is defined.
#endif

#ifdef PRINT_BYE
	std::cout << "Bye" << '\n'; // Will be excluded since PRINT_BYE is not defined.
#endif

#if 1 // The following code will be compiled.
	std::cout << "compiled!" << '\n';
#endif

#if 0  // The following code will not be compiled...
	std::cout << "not compiled!";
#endif // until this point.
		std::cout << "finally, compiled!";

	return EXIT_SUCCESS;
}