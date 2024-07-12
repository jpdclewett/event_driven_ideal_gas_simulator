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
CMAKE_SOURCE_DIR = /home/james/physics/event_driven_ideal_gas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/james/physics/event_driven_ideal_gas/build

# Include any dependencies generated for this target.
include libs/context/CMakeFiles/context.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/context/CMakeFiles/context.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/context/CMakeFiles/context.dir/progress.make

# Include the compile flags for this target's objects.
include libs/context/CMakeFiles/context.dir/flags.make

libs/context/CMakeFiles/context.dir/context.c.o: libs/context/CMakeFiles/context.dir/flags.make
libs/context/CMakeFiles/context.dir/context.c.o: ../libs/context/context.c
libs/context/CMakeFiles/context.dir/context.c.o: libs/context/CMakeFiles/context.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/james/physics/event_driven_ideal_gas/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libs/context/CMakeFiles/context.dir/context.c.o"
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT libs/context/CMakeFiles/context.dir/context.c.o -MF CMakeFiles/context.dir/context.c.o.d -o CMakeFiles/context.dir/context.c.o -c /home/james/physics/event_driven_ideal_gas/libs/context/context.c

libs/context/CMakeFiles/context.dir/context.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/context.dir/context.c.i"
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/james/physics/event_driven_ideal_gas/libs/context/context.c > CMakeFiles/context.dir/context.c.i

libs/context/CMakeFiles/context.dir/context.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/context.dir/context.c.s"
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/james/physics/event_driven_ideal_gas/libs/context/context.c -o CMakeFiles/context.dir/context.c.s

libs/context/CMakeFiles/context.dir/read_file_to_string.c.o: libs/context/CMakeFiles/context.dir/flags.make
libs/context/CMakeFiles/context.dir/read_file_to_string.c.o: ../libs/context/read_file_to_string.c
libs/context/CMakeFiles/context.dir/read_file_to_string.c.o: libs/context/CMakeFiles/context.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/james/physics/event_driven_ideal_gas/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object libs/context/CMakeFiles/context.dir/read_file_to_string.c.o"
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT libs/context/CMakeFiles/context.dir/read_file_to_string.c.o -MF CMakeFiles/context.dir/read_file_to_string.c.o.d -o CMakeFiles/context.dir/read_file_to_string.c.o -c /home/james/physics/event_driven_ideal_gas/libs/context/read_file_to_string.c

libs/context/CMakeFiles/context.dir/read_file_to_string.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/context.dir/read_file_to_string.c.i"
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/james/physics/event_driven_ideal_gas/libs/context/read_file_to_string.c > CMakeFiles/context.dir/read_file_to_string.c.i

libs/context/CMakeFiles/context.dir/read_file_to_string.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/context.dir/read_file_to_string.c.s"
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/james/physics/event_driven_ideal_gas/libs/context/read_file_to_string.c -o CMakeFiles/context.dir/read_file_to_string.c.s

# Object files for target context
context_OBJECTS = \
"CMakeFiles/context.dir/context.c.o" \
"CMakeFiles/context.dir/read_file_to_string.c.o"

# External object files for target context
context_EXTERNAL_OBJECTS =

libs/context/libcontext.a: libs/context/CMakeFiles/context.dir/context.c.o
libs/context/libcontext.a: libs/context/CMakeFiles/context.dir/read_file_to_string.c.o
libs/context/libcontext.a: libs/context/CMakeFiles/context.dir/build.make
libs/context/libcontext.a: libs/context/CMakeFiles/context.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/james/physics/event_driven_ideal_gas/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libcontext.a"
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && $(CMAKE_COMMAND) -P CMakeFiles/context.dir/cmake_clean_target.cmake
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/context.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/context/CMakeFiles/context.dir/build: libs/context/libcontext.a
.PHONY : libs/context/CMakeFiles/context.dir/build

libs/context/CMakeFiles/context.dir/clean:
	cd /home/james/physics/event_driven_ideal_gas/build/libs/context && $(CMAKE_COMMAND) -P CMakeFiles/context.dir/cmake_clean.cmake
.PHONY : libs/context/CMakeFiles/context.dir/clean

libs/context/CMakeFiles/context.dir/depend:
	cd /home/james/physics/event_driven_ideal_gas/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/james/physics/event_driven_ideal_gas /home/james/physics/event_driven_ideal_gas/libs/context /home/james/physics/event_driven_ideal_gas/build /home/james/physics/event_driven_ideal_gas/build/libs/context /home/james/physics/event_driven_ideal_gas/build/libs/context/CMakeFiles/context.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/context/CMakeFiles/context.dir/depend

