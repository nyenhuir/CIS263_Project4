# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CIS263Project4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CIS263Project4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CIS263Project4.dir/flags.make

CMakeFiles/CIS263Project4.dir/main.cpp.obj: CMakeFiles/CIS263Project4.dir/flags.make
CMakeFiles/CIS263Project4.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CIS263Project4.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CIS263Project4.dir\main.cpp.obj -c "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\main.cpp"

CMakeFiles/CIS263Project4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CIS263Project4.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\main.cpp" > CMakeFiles\CIS263Project4.dir\main.cpp.i

CMakeFiles/CIS263Project4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CIS263Project4.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\main.cpp" -o CMakeFiles\CIS263Project4.dir\main.cpp.s

# Object files for target CIS263Project4
CIS263Project4_OBJECTS = \
"CMakeFiles/CIS263Project4.dir/main.cpp.obj"

# External object files for target CIS263Project4
CIS263Project4_EXTERNAL_OBJECTS =

CIS263Project4.exe: CMakeFiles/CIS263Project4.dir/main.cpp.obj
CIS263Project4.exe: CMakeFiles/CIS263Project4.dir/build.make
CIS263Project4.exe: CMakeFiles/CIS263Project4.dir/linklibs.rsp
CIS263Project4.exe: CMakeFiles/CIS263Project4.dir/objects1.rsp
CIS263Project4.exe: CMakeFiles/CIS263Project4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CIS263Project4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CIS263Project4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CIS263Project4.dir/build: CIS263Project4.exe

.PHONY : CMakeFiles/CIS263Project4.dir/build

CMakeFiles/CIS263Project4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CIS263Project4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CIS263Project4.dir/clean

CMakeFiles/CIS263Project4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4" "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4" "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\cmake-build-debug" "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\cmake-build-debug" "C:\Users\nyenh\Documents\GVSU\SUMMER 2019\CIS263\PROJECTS\CIS263Project4\cmake-build-debug\CMakeFiles\CIS263Project4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CIS263Project4.dir/depend
