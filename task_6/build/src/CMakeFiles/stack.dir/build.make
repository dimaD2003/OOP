# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /root/OOP/task_6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/OOP/task_6/build

# Include any dependencies generated for this target.
include src/CMakeFiles/stack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/stack.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/stack.dir/flags.make

src/CMakeFiles/stack.dir/stack.cpp.o: src/CMakeFiles/stack.dir/flags.make
src/CMakeFiles/stack.dir/stack.cpp.o: ../src/stack.cpp
src/CMakeFiles/stack.dir/stack.cpp.o: src/CMakeFiles/stack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/OOP/task_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/stack.dir/stack.cpp.o"
	cd /root/OOP/task_6/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/stack.dir/stack.cpp.o -MF CMakeFiles/stack.dir/stack.cpp.o.d -o CMakeFiles/stack.dir/stack.cpp.o -c /root/OOP/task_6/src/stack.cpp

src/CMakeFiles/stack.dir/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack.dir/stack.cpp.i"
	cd /root/OOP/task_6/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/OOP/task_6/src/stack.cpp > CMakeFiles/stack.dir/stack.cpp.i

src/CMakeFiles/stack.dir/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack.dir/stack.cpp.s"
	cd /root/OOP/task_6/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/OOP/task_6/src/stack.cpp -o CMakeFiles/stack.dir/stack.cpp.s

# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/stack.cpp.o"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

src/libstack.a: src/CMakeFiles/stack.dir/stack.cpp.o
src/libstack.a: src/CMakeFiles/stack.dir/build.make
src/libstack.a: src/CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/OOP/task_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstack.a"
	cd /root/OOP/task_6/build/src && $(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean_target.cmake
	cd /root/OOP/task_6/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/stack.dir/build: src/libstack.a
.PHONY : src/CMakeFiles/stack.dir/build

src/CMakeFiles/stack.dir/clean:
	cd /root/OOP/task_6/build/src && $(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/stack.dir/clean

src/CMakeFiles/stack.dir/depend:
	cd /root/OOP/task_6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/OOP/task_6 /root/OOP/task_6/src /root/OOP/task_6/build /root/OOP/task_6/build/src /root/OOP/task_6/build/src/CMakeFiles/stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/stack.dir/depend

