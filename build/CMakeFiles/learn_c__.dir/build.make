# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.6/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yaohua/CLionProjects/learn_c++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yaohua/CLionProjects/learn_c++/build

# Include any dependencies generated for this target.
include CMakeFiles/learn_c__.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/learn_c__.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/learn_c__.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learn_c__.dir/flags.make

CMakeFiles/learn_c__.dir/main.cpp.o: CMakeFiles/learn_c__.dir/flags.make
CMakeFiles/learn_c__.dir/main.cpp.o: /Users/yaohua/CLionProjects/learn_c++/main.cpp
CMakeFiles/learn_c__.dir/main.cpp.o: CMakeFiles/learn_c__.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yaohua/CLionProjects/learn_c++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/learn_c__.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/learn_c__.dir/main.cpp.o -MF CMakeFiles/learn_c__.dir/main.cpp.o.d -o CMakeFiles/learn_c__.dir/main.cpp.o -c /Users/yaohua/CLionProjects/learn_c++/main.cpp

CMakeFiles/learn_c__.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/learn_c__.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yaohua/CLionProjects/learn_c++/main.cpp > CMakeFiles/learn_c__.dir/main.cpp.i

CMakeFiles/learn_c__.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/learn_c__.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yaohua/CLionProjects/learn_c++/main.cpp -o CMakeFiles/learn_c__.dir/main.cpp.s

# Object files for target learn_c__
learn_c___OBJECTS = \
"CMakeFiles/learn_c__.dir/main.cpp.o"

# External object files for target learn_c__
learn_c___EXTERNAL_OBJECTS =

learn_c__: CMakeFiles/learn_c__.dir/main.cpp.o
learn_c__: CMakeFiles/learn_c__.dir/build.make
learn_c__: CMakeFiles/learn_c__.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/yaohua/CLionProjects/learn_c++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable learn_c__"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/learn_c__.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learn_c__.dir/build: learn_c__
.PHONY : CMakeFiles/learn_c__.dir/build

CMakeFiles/learn_c__.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/learn_c__.dir/cmake_clean.cmake
.PHONY : CMakeFiles/learn_c__.dir/clean

CMakeFiles/learn_c__.dir/depend:
	cd /Users/yaohua/CLionProjects/learn_c++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yaohua/CLionProjects/learn_c++ /Users/yaohua/CLionProjects/learn_c++ /Users/yaohua/CLionProjects/learn_c++/build /Users/yaohua/CLionProjects/learn_c++/build /Users/yaohua/CLionProjects/learn_c++/build/CMakeFiles/learn_c__.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/learn_c__.dir/depend
