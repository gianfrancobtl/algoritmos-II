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
include CMakeFiles/ej5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ej5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej5.dir/flags.make

CMakeFiles/ej5.dir/tests/test_templates.cpp.o: CMakeFiles/ej5.dir/flags.make
CMakeFiles/ej5.dir/tests/test_templates.cpp.o: ../tests/test_templates.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej5.dir/tests/test_templates.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ej5.dir/tests/test_templates.cpp.o -c "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_templates.cpp"

CMakeFiles/ej5.dir/tests/test_templates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej5.dir/tests/test_templates.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_templates.cpp" > CMakeFiles/ej5.dir/tests/test_templates.cpp.i

CMakeFiles/ej5.dir/tests/test_templates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej5.dir/tests/test_templates.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_templates.cpp" -o CMakeFiles/ej5.dir/tests/test_templates.cpp.s

CMakeFiles/ej5.dir/tests/test_diccionario.cpp.o: CMakeFiles/ej5.dir/flags.make
CMakeFiles/ej5.dir/tests/test_diccionario.cpp.o: ../tests/test_diccionario.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ej5.dir/tests/test_diccionario.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ej5.dir/tests/test_diccionario.cpp.o -c "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_diccionario.cpp"

CMakeFiles/ej5.dir/tests/test_diccionario.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej5.dir/tests/test_diccionario.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_diccionario.cpp" > CMakeFiles/ej5.dir/tests/test_diccionario.cpp.i

CMakeFiles/ej5.dir/tests/test_diccionario.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej5.dir/tests/test_diccionario.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/tests/test_diccionario.cpp" -o CMakeFiles/ej5.dir/tests/test_diccionario.cpp.s

# Object files for target ej5
ej5_OBJECTS = \
"CMakeFiles/ej5.dir/tests/test_templates.cpp.o" \
"CMakeFiles/ej5.dir/tests/test_diccionario.cpp.o"

# External object files for target ej5
ej5_EXTERNAL_OBJECTS =

ej5: CMakeFiles/ej5.dir/tests/test_templates.cpp.o
ej5: CMakeFiles/ej5.dir/tests/test_diccionario.cpp.o
ej5: CMakeFiles/ej5.dir/build.make
ej5: tests/google-test/libgtest.a
ej5: tests/google-test/libgtest_main.a
ej5: tests/google-test/libgtest.a
ej5: CMakeFiles/ej5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ej5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ej5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej5.dir/build: ej5

.PHONY : CMakeFiles/ej5.dir/build

CMakeFiles/ej5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ej5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ej5.dir/clean

CMakeFiles/ej5.dir/depend:
	cd "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug" "/Users/gianbattolla/Documents/Año 2021 - Cs. de la Computación/Algoritmos II/Labo/ejercitacion_templates_corregida/cmake-build-debug/CMakeFiles/ej5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ej5.dir/depend

