# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Work\C++\SuffixTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Work\C++\SuffixTree\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SuffixTree.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SuffixTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SuffixTree.dir/flags.make

CMakeFiles/SuffixTree.dir/main.cpp.obj: CMakeFiles/SuffixTree.dir/flags.make
CMakeFiles/SuffixTree.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Work\C++\SuffixTree\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SuffixTree.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SuffixTree.dir\main.cpp.obj -c D:\Work\C++\SuffixTree\main.cpp

CMakeFiles/SuffixTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SuffixTree.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Work\C++\SuffixTree\main.cpp > CMakeFiles\SuffixTree.dir\main.cpp.i

CMakeFiles/SuffixTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SuffixTree.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Work\C++\SuffixTree\main.cpp -o CMakeFiles\SuffixTree.dir\main.cpp.s

# Object files for target SuffixTree
SuffixTree_OBJECTS = \
"CMakeFiles/SuffixTree.dir/main.cpp.obj"

# External object files for target SuffixTree
SuffixTree_EXTERNAL_OBJECTS =

SuffixTree.exe: CMakeFiles/SuffixTree.dir/main.cpp.obj
SuffixTree.exe: CMakeFiles/SuffixTree.dir/build.make
SuffixTree.exe: CMakeFiles/SuffixTree.dir/linklibs.rsp
SuffixTree.exe: CMakeFiles/SuffixTree.dir/objects1.rsp
SuffixTree.exe: CMakeFiles/SuffixTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Work\C++\SuffixTree\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SuffixTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SuffixTree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SuffixTree.dir/build: SuffixTree.exe
.PHONY : CMakeFiles/SuffixTree.dir/build

CMakeFiles/SuffixTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SuffixTree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SuffixTree.dir/clean

CMakeFiles/SuffixTree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Work\C++\SuffixTree D:\Work\C++\SuffixTree D:\Work\C++\SuffixTree\cmake-build-debug D:\Work\C++\SuffixTree\cmake-build-debug D:\Work\C++\SuffixTree\cmake-build-debug\CMakeFiles\SuffixTree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SuffixTree.dir/depend
