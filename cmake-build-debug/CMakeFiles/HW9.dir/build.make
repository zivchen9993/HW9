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
CMAKE_COMMAND = /home/mamat/CLion/clion-2020.3.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/mamat/CLion/clion-2020.3.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mamat/CLionProjects/HW9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mamat/CLionProjects/HW9/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW9.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW9.dir/flags.make

CMakeFiles/HW9.dir/string.cpp.o: CMakeFiles/HW9.dir/flags.make
CMakeFiles/HW9.dir/string.cpp.o: ../string.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mamat/CLionProjects/HW9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW9.dir/string.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW9.dir/string.cpp.o -c /home/mamat/CLionProjects/HW9/string.cpp

CMakeFiles/HW9.dir/string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW9.dir/string.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mamat/CLionProjects/HW9/string.cpp > CMakeFiles/HW9.dir/string.cpp.i

CMakeFiles/HW9.dir/string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW9.dir/string.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mamat/CLionProjects/HW9/string.cpp -o CMakeFiles/HW9.dir/string.cpp.s

CMakeFiles/HW9.dir/main.cpp.o: CMakeFiles/HW9.dir/flags.make
CMakeFiles/HW9.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mamat/CLionProjects/HW9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW9.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW9.dir/main.cpp.o -c /home/mamat/CLionProjects/HW9/main.cpp

CMakeFiles/HW9.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW9.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mamat/CLionProjects/HW9/main.cpp > CMakeFiles/HW9.dir/main.cpp.i

CMakeFiles/HW9.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW9.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mamat/CLionProjects/HW9/main.cpp -o CMakeFiles/HW9.dir/main.cpp.s

CMakeFiles/HW9.dir/field.cpp.o: CMakeFiles/HW9.dir/flags.make
CMakeFiles/HW9.dir/field.cpp.o: ../field.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mamat/CLionProjects/HW9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HW9.dir/field.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW9.dir/field.cpp.o -c /home/mamat/CLionProjects/HW9/field.cpp

CMakeFiles/HW9.dir/field.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW9.dir/field.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mamat/CLionProjects/HW9/field.cpp > CMakeFiles/HW9.dir/field.cpp.i

CMakeFiles/HW9.dir/field.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW9.dir/field.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mamat/CLionProjects/HW9/field.cpp -o CMakeFiles/HW9.dir/field.cpp.s

# Object files for target HW9
HW9_OBJECTS = \
"CMakeFiles/HW9.dir/string.cpp.o" \
"CMakeFiles/HW9.dir/main.cpp.o" \
"CMakeFiles/HW9.dir/field.cpp.o"

# External object files for target HW9
HW9_EXTERNAL_OBJECTS =

HW9: CMakeFiles/HW9.dir/string.cpp.o
HW9: CMakeFiles/HW9.dir/main.cpp.o
HW9: CMakeFiles/HW9.dir/field.cpp.o
HW9: CMakeFiles/HW9.dir/build.make
HW9: CMakeFiles/HW9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mamat/CLionProjects/HW9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable HW9"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW9.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW9.dir/build: HW9

.PHONY : CMakeFiles/HW9.dir/build

CMakeFiles/HW9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW9.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW9.dir/clean

CMakeFiles/HW9.dir/depend:
	cd /home/mamat/CLionProjects/HW9/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mamat/CLionProjects/HW9 /home/mamat/CLionProjects/HW9 /home/mamat/CLionProjects/HW9/cmake-build-debug /home/mamat/CLionProjects/HW9/cmake-build-debug /home/mamat/CLionProjects/HW9/cmake-build-debug/CMakeFiles/HW9.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW9.dir/depend
