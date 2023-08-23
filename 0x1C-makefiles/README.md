## C-Makefiles

Make and Makefiles are essential tools in software development, commonly used to automate the build process of projects. They facilitate compiling, linking, and managing complex projects.

Make:
- 'make' is a command-line utility that reads Makefiles to execute commands for building and managing a project.
- It automates the process of compiling source code into executables, checking dependencies, and executing commands.

Makefiles:
- A Makefile is a text file that contains rules and instructions for the 'make' command to build and manage the project.
- It specifies how source files are compiled, dependencies, and commands to create executables.

When, Why, and How to Use Makefiles:
- Use Makefiles to automate the build process, making it easier to manage large projects.
- Makefiles help avoid recompilation of unchanged files, saving time.
- To use, create a Makefile in the project directory and define rules for compilation, linking, and cleaning.

Rules:
- Rules define the relationship between files, specifying how to generate output files from input files.
- A rule consists of a target, prerequisites (dependencies), and commands to execute.

Explicit and Implicit Rules:
- Explicit rules specify exactly how to generate a target from prerequisites.
- Implicit rules are predefined rules for common actions (e.g., compiling C source to object files).

Common/Useful Rules:
- 'all': The default target that builds the entire project.
- 'clean': Removes generated files, like object files and executables.
- 'install': Installs the software.
- 'uninstall': Uninstalls the software.


Variables:
- Variables store values used in Makefiles, making them more dynamic.
- Use variables to store compiler flags, filenames, and other project-specific values.


Setting and Using Variables:
- Variables are set using the format: 'VARIABLE_NAME = value'.
- Use variables with '$(VARIABLE_NAME)' to reference their values in rules and commands.

