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
CMAKE_COMMAND = C:\Users\icaro\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\191.7141.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\icaro\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\191.7141.37\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Projetos\Faculdade\inteligencia-artificial\arduino\clion_esp_wifiv2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projetos\Faculdade\inteligencia-artificial\arduino\clion_esp_wifiv2\cmake-build-debug

# Utility rule file for PLATFORMIO_UPDATE_ALL.

# Include the progress variables for this target.
include CMakeFiles/PLATFORMIO_UPDATE_ALL.dir/progress.make

CMakeFiles/PLATFORMIO_UPDATE_ALL:
	cd /d C:\Projetos\Faculdade\inteligencia-artificial\arduino\clion_esp_wifiv2 && call E:\\GoogleDrive\\Atalhos\\batch\\platformio.bat -f -c clion update

PLATFORMIO_UPDATE_ALL: CMakeFiles/PLATFORMIO_UPDATE_ALL
PLATFORMIO_UPDATE_ALL: CMakeFiles/PLATFORMIO_UPDATE_ALL.dir/build.make

.PHONY : PLATFORMIO_UPDATE_ALL

# Rule to build all files generated by this target.
CMakeFiles/PLATFORMIO_UPDATE_ALL.dir/build: PLATFORMIO_UPDATE_ALL

.PHONY : CMakeFiles/PLATFORMIO_UPDATE_ALL.dir/build

CMakeFiles/PLATFORMIO_UPDATE_ALL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PLATFORMIO_UPDATE_ALL.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PLATFORMIO_UPDATE_ALL.dir/clean

CMakeFiles/PLATFORMIO_UPDATE_ALL.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projetos\Faculdade\inteligencia-artificial\arduino\clion_esp_wifiv2 C:\Projetos\Faculdade\inteligencia-artificial\arduino\clion_esp_wifiv2 C:\Projetos\Faculdade\inteligencia-artificial\arduino\clion_esp_wifiv2\cmake-build-debug C:\Projetos\Faculdade\inteligencia-artificial\arduino\clion_esp_wifiv2\cmake-build-debug C:\Projetos\Faculdade\inteligencia-artificial\arduino\clion_esp_wifiv2\cmake-build-debug\CMakeFiles\PLATFORMIO_UPDATE_ALL.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PLATFORMIO_UPDATE_ALL.dir/depend

