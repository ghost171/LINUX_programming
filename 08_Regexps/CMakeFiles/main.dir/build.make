# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/esub.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/esub.c.o: esub.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/esub.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/esub.c.o   -c /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/esub.c

CMakeFiles/main.dir/esub.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/esub.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/esub.c > CMakeFiles/main.dir/esub.c.i

CMakeFiles/main.dir/esub.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/esub.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/esub.c -o CMakeFiles/main.dir/esub.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/esub.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/esub.c.o
main: CMakeFiles/main.dir/build.make
main: libreplace.a
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

