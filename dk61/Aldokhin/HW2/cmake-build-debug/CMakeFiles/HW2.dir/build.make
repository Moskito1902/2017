# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Inform\HW2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Inform\HW2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW2.dir/flags.make

CMakeFiles/HW2.dir/main.c.obj: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Inform\HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HW2.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HW2.dir\main.c.obj   -c D:\Inform\HW2\main.c

CMakeFiles/HW2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HW2.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Inform\HW2\main.c > CMakeFiles\HW2.dir\main.c.i

CMakeFiles/HW2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HW2.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Inform\HW2\main.c -o CMakeFiles\HW2.dir\main.c.s

CMakeFiles/HW2.dir/main.c.obj.requires:

.PHONY : CMakeFiles/HW2.dir/main.c.obj.requires

CMakeFiles/HW2.dir/main.c.obj.provides: CMakeFiles/HW2.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\HW2.dir\build.make CMakeFiles/HW2.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/HW2.dir/main.c.obj.provides

CMakeFiles/HW2.dir/main.c.obj.provides.build: CMakeFiles/HW2.dir/main.c.obj


CMakeFiles/HW2.dir/dk_tool.c.obj: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/dk_tool.c.obj: ../dk_tool.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Inform\HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/HW2.dir/dk_tool.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HW2.dir\dk_tool.c.obj   -c D:\Inform\HW2\dk_tool.c

CMakeFiles/HW2.dir/dk_tool.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HW2.dir/dk_tool.c.i"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Inform\HW2\dk_tool.c > CMakeFiles\HW2.dir\dk_tool.c.i

CMakeFiles/HW2.dir/dk_tool.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HW2.dir/dk_tool.c.s"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Inform\HW2\dk_tool.c -o CMakeFiles\HW2.dir\dk_tool.c.s

CMakeFiles/HW2.dir/dk_tool.c.obj.requires:

.PHONY : CMakeFiles/HW2.dir/dk_tool.c.obj.requires

CMakeFiles/HW2.dir/dk_tool.c.obj.provides: CMakeFiles/HW2.dir/dk_tool.c.obj.requires
	$(MAKE) -f CMakeFiles\HW2.dir\build.make CMakeFiles/HW2.dir/dk_tool.c.obj.provides.build
.PHONY : CMakeFiles/HW2.dir/dk_tool.c.obj.provides

CMakeFiles/HW2.dir/dk_tool.c.obj.provides.build: CMakeFiles/HW2.dir/dk_tool.c.obj


# Object files for target HW2
HW2_OBJECTS = \
"CMakeFiles/HW2.dir/main.c.obj" \
"CMakeFiles/HW2.dir/dk_tool.c.obj"

# External object files for target HW2
HW2_EXTERNAL_OBJECTS =

HW2.exe: CMakeFiles/HW2.dir/main.c.obj
HW2.exe: CMakeFiles/HW2.dir/dk_tool.c.obj
HW2.exe: CMakeFiles/HW2.dir/build.make
HW2.exe: CMakeFiles/HW2.dir/linklibs.rsp
HW2.exe: CMakeFiles/HW2.dir/objects1.rsp
HW2.exe: CMakeFiles/HW2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Inform\HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable HW2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW2.dir/build: HW2.exe

.PHONY : CMakeFiles/HW2.dir/build

CMakeFiles/HW2.dir/requires: CMakeFiles/HW2.dir/main.c.obj.requires
CMakeFiles/HW2.dir/requires: CMakeFiles/HW2.dir/dk_tool.c.obj.requires

.PHONY : CMakeFiles/HW2.dir/requires

CMakeFiles/HW2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW2.dir/clean

CMakeFiles/HW2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Inform\HW2 D:\Inform\HW2 D:\Inform\HW2\cmake-build-debug D:\Inform\HW2\cmake-build-debug D:\Inform\HW2\cmake-build-debug\CMakeFiles\HW2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW2.dir/depend

