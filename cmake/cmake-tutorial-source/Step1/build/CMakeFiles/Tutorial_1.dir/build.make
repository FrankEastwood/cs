# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/cmake/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vk/code/cmake-tutorial-source/Step1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vk/code/cmake-tutorial-source/Step1/build

# Include any dependencies generated for this target.
include CMakeFiles/Tutorial_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Tutorial_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Tutorial_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tutorial_1.dir/flags.make

CMakeFiles/Tutorial_1.dir/codegen:
.PHONY : CMakeFiles/Tutorial_1.dir/codegen

CMakeFiles/Tutorial_1.dir/tutorial.cxx.o: CMakeFiles/Tutorial_1.dir/flags.make
CMakeFiles/Tutorial_1.dir/tutorial.cxx.o: /home/vk/code/cmake-tutorial-source/Step1/tutorial.cxx
CMakeFiles/Tutorial_1.dir/tutorial.cxx.o: CMakeFiles/Tutorial_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vk/code/cmake-tutorial-source/Step1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tutorial_1.dir/tutorial.cxx.o"
	/opt/rh/devtoolset-10/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Tutorial_1.dir/tutorial.cxx.o -MF CMakeFiles/Tutorial_1.dir/tutorial.cxx.o.d -o CMakeFiles/Tutorial_1.dir/tutorial.cxx.o -c /home/vk/code/cmake-tutorial-source/Step1/tutorial.cxx

CMakeFiles/Tutorial_1.dir/tutorial.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Tutorial_1.dir/tutorial.cxx.i"
	/opt/rh/devtoolset-10/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vk/code/cmake-tutorial-source/Step1/tutorial.cxx > CMakeFiles/Tutorial_1.dir/tutorial.cxx.i

CMakeFiles/Tutorial_1.dir/tutorial.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Tutorial_1.dir/tutorial.cxx.s"
	/opt/rh/devtoolset-10/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vk/code/cmake-tutorial-source/Step1/tutorial.cxx -o CMakeFiles/Tutorial_1.dir/tutorial.cxx.s

# Object files for target Tutorial_1
Tutorial_1_OBJECTS = \
"CMakeFiles/Tutorial_1.dir/tutorial.cxx.o"

# External object files for target Tutorial_1
Tutorial_1_EXTERNAL_OBJECTS =

Tutorial_1: CMakeFiles/Tutorial_1.dir/tutorial.cxx.o
Tutorial_1: CMakeFiles/Tutorial_1.dir/build.make
Tutorial_1: CMakeFiles/Tutorial_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/vk/code/cmake-tutorial-source/Step1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tutorial_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tutorial_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tutorial_1.dir/build: Tutorial_1
.PHONY : CMakeFiles/Tutorial_1.dir/build

CMakeFiles/Tutorial_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tutorial_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tutorial_1.dir/clean

CMakeFiles/Tutorial_1.dir/depend:
	cd /home/vk/code/cmake-tutorial-source/Step1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vk/code/cmake-tutorial-source/Step1 /home/vk/code/cmake-tutorial-source/Step1 /home/vk/code/cmake-tutorial-source/Step1/build /home/vk/code/cmake-tutorial-source/Step1/build /home/vk/code/cmake-tutorial-source/Step1/build/CMakeFiles/Tutorial_1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Tutorial_1.dir/depend

