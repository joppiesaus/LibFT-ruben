# LibFT
 🛠 Custom basic C library used for the '21 Codam curriculum

### Quick start

```bash
$ make
```

Copy or include the `libft.h` and `libft.a` files in your project

### Usage

Include libft like this in your `.c` files
```c
#include "libft.h"
```
And compile your project with the `libft.a` file

### Folder structure
```
/ - LibFT
    / - include
        # all .h files can be found here
    / - src
        # the .c files
    / - tests
        # all tests for the functions written in Criterion
    libft.a # will be created after running the make command
```

## Testing
This project has a custom tester written in Criterion. This means that to run this tester the Criterion package must be installed. Running the tester can be done through `make test` this will run the test suite and output a file in `/tests/` called `results.txt`.

### Notes
This project started during my academic year '21 at Codam. Due to a norm they have for the code certain functions
might be written in 'interesting' ways. In most cases these functions would be written in a differently structured
way improving speed or memory usage.

This library will scale with the functionality I require during my time at Codam. Therefore some functions that might
be obvious for you to use won't be added as I don't have a use for them.

Happy coding :)
