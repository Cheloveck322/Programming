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
CMAKE_COMMAND = /snap/cmake/1441/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1441/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cheloveck/qt/Window

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheloveck/qt/Window/build/Desktop-Debug

# Utility rule file for Window_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Window_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Window_autogen.dir/progress.make

CMakeFiles/Window_autogen: Window_autogen/timestamp

Window_autogen/timestamp: /usr/lib/qt6/libexec/moc
Window_autogen/timestamp: /usr/lib/qt6/libexec/uic
Window_autogen/timestamp: CMakeFiles/Window_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/cheloveck/qt/Window/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Window"
	/snap/cmake/1441/bin/cmake -E cmake_autogen /home/cheloveck/qt/Window/build/Desktop-Debug/CMakeFiles/Window_autogen.dir/AutogenInfo.json Debug
	/snap/cmake/1441/bin/cmake -E touch /home/cheloveck/qt/Window/build/Desktop-Debug/Window_autogen/timestamp

CMakeFiles/Window_autogen.dir/codegen:
.PHONY : CMakeFiles/Window_autogen.dir/codegen

Window_autogen: CMakeFiles/Window_autogen
Window_autogen: Window_autogen/timestamp
Window_autogen: CMakeFiles/Window_autogen.dir/build.make
.PHONY : Window_autogen

# Rule to build all files generated by this target.
CMakeFiles/Window_autogen.dir/build: Window_autogen
.PHONY : CMakeFiles/Window_autogen.dir/build

CMakeFiles/Window_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Window_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Window_autogen.dir/clean

CMakeFiles/Window_autogen.dir/depend:
	cd /home/cheloveck/qt/Window/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheloveck/qt/Window /home/cheloveck/qt/Window /home/cheloveck/qt/Window/build/Desktop-Debug /home/cheloveck/qt/Window/build/Desktop-Debug /home/cheloveck/qt/Window/build/Desktop-Debug/CMakeFiles/Window_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Window_autogen.dir/depend

