# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant

# Include any dependencies generated for this target.
include CMakeFiles/ROPs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ROPs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ROPs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ROPs.dir/flags.make

CMakeFiles/ROPs.dir/src/main.cpp.o: CMakeFiles/ROPs.dir/flags.make
CMakeFiles/ROPs.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/ROPs.dir/src/main.cpp.o: CMakeFiles/ROPs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ROPs.dir/src/main.cpp.o"
	/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ROPs.dir/src/main.cpp.o -MF CMakeFiles/ROPs.dir/src/main.cpp.o.d -o CMakeFiles/ROPs.dir/src/main.cpp.o -c /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant/src/main.cpp

CMakeFiles/ROPs.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ROPs.dir/src/main.cpp.i"
	/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant/src/main.cpp > CMakeFiles/ROPs.dir/src/main.cpp.i

CMakeFiles/ROPs.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ROPs.dir/src/main.cpp.s"
	/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant/src/main.cpp -o CMakeFiles/ROPs.dir/src/main.cpp.s

# Object files for target ROPs
ROPs_OBJECTS = \
"CMakeFiles/ROPs.dir/src/main.cpp.o"

# External object files for target ROPs
ROPs_EXTERNAL_OBJECTS =

ROPs: CMakeFiles/ROPs.dir/src/main.cpp.o
ROPs: CMakeFiles/ROPs.dir/build.make
ROPs: CMakeFiles/ROPs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ROPs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ROPs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ROPs.dir/build: ROPs
.PHONY : CMakeFiles/ROPs.dir/build

CMakeFiles/ROPs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROPs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROPs.dir/clean

CMakeFiles/ROPs.dir/depend:
	cd /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant /home/preacher/Documents/Programming/hobbys/Relms-Of-Posibilitys/Relms-of-Posibility.git/Cliant/Cliant/CMakeFiles/ROPs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROPs.dir/depend

