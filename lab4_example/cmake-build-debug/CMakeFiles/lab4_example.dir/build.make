# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/jakubik/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jakubik/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jakubik/Studia/cpp/lab4_example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jakubik/Studia/cpp/lab4_example/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab4_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab4_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab4_example.dir/flags.make

CMakeFiles/lab4_example.dir/main.cpp.o: CMakeFiles/lab4_example.dir/flags.make
CMakeFiles/lab4_example.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakubik/Studia/cpp/lab4_example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab4_example.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab4_example.dir/main.cpp.o -c /home/jakubik/Studia/cpp/lab4_example/main.cpp

CMakeFiles/lab4_example.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4_example.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakubik/Studia/cpp/lab4_example/main.cpp > CMakeFiles/lab4_example.dir/main.cpp.i

CMakeFiles/lab4_example.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4_example.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakubik/Studia/cpp/lab4_example/main.cpp -o CMakeFiles/lab4_example.dir/main.cpp.s

CMakeFiles/lab4_example.dir/Osoba.cpp.o: CMakeFiles/lab4_example.dir/flags.make
CMakeFiles/lab4_example.dir/Osoba.cpp.o: ../Osoba.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakubik/Studia/cpp/lab4_example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab4_example.dir/Osoba.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab4_example.dir/Osoba.cpp.o -c /home/jakubik/Studia/cpp/lab4_example/Osoba.cpp

CMakeFiles/lab4_example.dir/Osoba.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4_example.dir/Osoba.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakubik/Studia/cpp/lab4_example/Osoba.cpp > CMakeFiles/lab4_example.dir/Osoba.cpp.i

CMakeFiles/lab4_example.dir/Osoba.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4_example.dir/Osoba.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakubik/Studia/cpp/lab4_example/Osoba.cpp -o CMakeFiles/lab4_example.dir/Osoba.cpp.s

CMakeFiles/lab4_example.dir/Pojazd.cpp.o: CMakeFiles/lab4_example.dir/flags.make
CMakeFiles/lab4_example.dir/Pojazd.cpp.o: ../Pojazd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakubik/Studia/cpp/lab4_example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab4_example.dir/Pojazd.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab4_example.dir/Pojazd.cpp.o -c /home/jakubik/Studia/cpp/lab4_example/Pojazd.cpp

CMakeFiles/lab4_example.dir/Pojazd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4_example.dir/Pojazd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakubik/Studia/cpp/lab4_example/Pojazd.cpp > CMakeFiles/lab4_example.dir/Pojazd.cpp.i

CMakeFiles/lab4_example.dir/Pojazd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4_example.dir/Pojazd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakubik/Studia/cpp/lab4_example/Pojazd.cpp -o CMakeFiles/lab4_example.dir/Pojazd.cpp.s

CMakeFiles/lab4_example.dir/Rower.cpp.o: CMakeFiles/lab4_example.dir/flags.make
CMakeFiles/lab4_example.dir/Rower.cpp.o: ../Rower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakubik/Studia/cpp/lab4_example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab4_example.dir/Rower.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab4_example.dir/Rower.cpp.o -c /home/jakubik/Studia/cpp/lab4_example/Rower.cpp

CMakeFiles/lab4_example.dir/Rower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4_example.dir/Rower.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakubik/Studia/cpp/lab4_example/Rower.cpp > CMakeFiles/lab4_example.dir/Rower.cpp.i

CMakeFiles/lab4_example.dir/Rower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4_example.dir/Rower.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakubik/Studia/cpp/lab4_example/Rower.cpp -o CMakeFiles/lab4_example.dir/Rower.cpp.s

CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.o: CMakeFiles/lab4_example.dir/flags.make
CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.o: ../PojazdSilnikowy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakubik/Studia/cpp/lab4_example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.o -c /home/jakubik/Studia/cpp/lab4_example/PojazdSilnikowy.cpp

CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakubik/Studia/cpp/lab4_example/PojazdSilnikowy.cpp > CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.i

CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakubik/Studia/cpp/lab4_example/PojazdSilnikowy.cpp -o CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.s

CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.o: CMakeFiles/lab4_example.dir/flags.make
CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.o: ../PojazdOsobowy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakubik/Studia/cpp/lab4_example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.o -c /home/jakubik/Studia/cpp/lab4_example/PojazdOsobowy.cpp

CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakubik/Studia/cpp/lab4_example/PojazdOsobowy.cpp > CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.i

CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakubik/Studia/cpp/lab4_example/PojazdOsobowy.cpp -o CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.s

# Object files for target lab4_example
lab4_example_OBJECTS = \
"CMakeFiles/lab4_example.dir/main.cpp.o" \
"CMakeFiles/lab4_example.dir/Osoba.cpp.o" \
"CMakeFiles/lab4_example.dir/Pojazd.cpp.o" \
"CMakeFiles/lab4_example.dir/Rower.cpp.o" \
"CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.o" \
"CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.o"

# External object files for target lab4_example
lab4_example_EXTERNAL_OBJECTS =

lab4_example: CMakeFiles/lab4_example.dir/main.cpp.o
lab4_example: CMakeFiles/lab4_example.dir/Osoba.cpp.o
lab4_example: CMakeFiles/lab4_example.dir/Pojazd.cpp.o
lab4_example: CMakeFiles/lab4_example.dir/Rower.cpp.o
lab4_example: CMakeFiles/lab4_example.dir/PojazdSilnikowy.cpp.o
lab4_example: CMakeFiles/lab4_example.dir/PojazdOsobowy.cpp.o
lab4_example: CMakeFiles/lab4_example.dir/build.make
lab4_example: CMakeFiles/lab4_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jakubik/Studia/cpp/lab4_example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable lab4_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab4_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab4_example.dir/build: lab4_example

.PHONY : CMakeFiles/lab4_example.dir/build

CMakeFiles/lab4_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab4_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab4_example.dir/clean

CMakeFiles/lab4_example.dir/depend:
	cd /home/jakubik/Studia/cpp/lab4_example/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jakubik/Studia/cpp/lab4_example /home/jakubik/Studia/cpp/lab4_example /home/jakubik/Studia/cpp/lab4_example/cmake-build-debug /home/jakubik/Studia/cpp/lab4_example/cmake-build-debug /home/jakubik/Studia/cpp/lab4_example/cmake-build-debug/CMakeFiles/lab4_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab4_example.dir/depend
