# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/base.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/base.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/base.dir/flags.make

CMakeFiles/base.dir/tests/test_base.cpp.o: CMakeFiles/base.dir/flags.make
CMakeFiles/base.dir/tests/test_base.cpp.o: ../tests/test_base.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/base.dir/tests/test_base.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base.dir/tests/test_base.cpp.o -c "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_base.cpp"

CMakeFiles/base.dir/tests/test_base.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base.dir/tests/test_base.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_base.cpp" > CMakeFiles/base.dir/tests/test_base.cpp.i

CMakeFiles/base.dir/tests/test_base.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base.dir/tests/test_base.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_base.cpp" -o CMakeFiles/base.dir/tests/test_base.cpp.s

# Object files for target base
base_OBJECTS = \
"CMakeFiles/base.dir/tests/test_base.cpp.o"

# External object files for target base
base_EXTERNAL_OBJECTS =

base: CMakeFiles/base.dir/tests/test_base.cpp.o
base: CMakeFiles/base.dir/build.make
base: tests/google-test/libgtest.a
base: tests/google-test/libgtest_main.a
base: tests/google-test/libgtest.a
base: CMakeFiles/base.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable base"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/base.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/base.dir/build: base

.PHONY : CMakeFiles/base.dir/build

CMakeFiles/base.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/base.dir/cmake_clean.cmake
.PHONY : CMakeFiles/base.dir/clean

CMakeFiles/base.dir/depend:
	cd "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug/CMakeFiles/base.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/base.dir/depend

