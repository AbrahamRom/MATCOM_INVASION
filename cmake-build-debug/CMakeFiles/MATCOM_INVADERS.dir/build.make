# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_SOURCE_DIR = "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MATCOM_INVADERS.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MATCOM_INVADERS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MATCOM_INVADERS.dir/flags.make

CMakeFiles/MATCOM_INVADERS.dir/main.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/main.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/main.c
CMakeFiles/MATCOM_INVADERS.dir/main.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MATCOM_INVADERS.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/main.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/main.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/main.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/main.c"

CMakeFiles/MATCOM_INVADERS.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/main.c" > CMakeFiles/MATCOM_INVADERS.dir/main.c.i

CMakeFiles/MATCOM_INVADERS.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/main.c" -o CMakeFiles/MATCOM_INVADERS.dir/main.c.s

CMakeFiles/MATCOM_INVADERS.dir/menu.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/menu.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/menu.c
CMakeFiles/MATCOM_INVADERS.dir/menu.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MATCOM_INVADERS.dir/menu.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/menu.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/menu.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/menu.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/menu.c"

CMakeFiles/MATCOM_INVADERS.dir/menu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/menu.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/menu.c" > CMakeFiles/MATCOM_INVADERS.dir/menu.c.i

CMakeFiles/MATCOM_INVADERS.dir/menu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/menu.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/menu.c" -o CMakeFiles/MATCOM_INVADERS.dir/menu.c.s

CMakeFiles/MATCOM_INVADERS.dir/ship.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/ship.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/ship.c
CMakeFiles/MATCOM_INVADERS.dir/ship.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/MATCOM_INVADERS.dir/ship.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/ship.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/ship.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/ship.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/ship.c"

CMakeFiles/MATCOM_INVADERS.dir/ship.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/ship.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/ship.c" > CMakeFiles/MATCOM_INVADERS.dir/ship.c.i

CMakeFiles/MATCOM_INVADERS.dir/ship.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/ship.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/ship.c" -o CMakeFiles/MATCOM_INVADERS.dir/ship.c.s

CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/print_frame.c
CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/print_frame.c"

CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/print_frame.c" > CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.i

CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/print_frame.c" -o CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.s

CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/enemies.c
CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/enemies.c"

CMakeFiles/MATCOM_INVADERS.dir/enemies.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/enemies.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/enemies.c" > CMakeFiles/MATCOM_INVADERS.dir/enemies.c.i

CMakeFiles/MATCOM_INVADERS.dir/enemies.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/enemies.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/enemies.c" -o CMakeFiles/MATCOM_INVADERS.dir/enemies.c.s

CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/bomb.c
CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/bomb.c"

CMakeFiles/MATCOM_INVADERS.dir/bomb.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/bomb.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/bomb.c" > CMakeFiles/MATCOM_INVADERS.dir/bomb.c.i

CMakeFiles/MATCOM_INVADERS.dir/bomb.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/bomb.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/bomb.c" -o CMakeFiles/MATCOM_INVADERS.dir/bomb.c.s

CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/bullets_p_c.c
CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/bullets_p_c.c"

CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/bullets_p_c.c" > CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.i

CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/bullets_p_c.c" -o CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.s

CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/NF_linkedlist.c
CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/NF_linkedlist.c"

CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/NF_linkedlist.c" > CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.i

CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/NF_linkedlist.c" -o CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.s

CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/save_local.c
CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/save_local.c"

CMakeFiles/MATCOM_INVADERS.dir/save_local.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/save_local.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/save_local.c" > CMakeFiles/MATCOM_INVADERS.dir/save_local.c.i

CMakeFiles/MATCOM_INVADERS.dir/save_local.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/save_local.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/save_local.c" -o CMakeFiles/MATCOM_INVADERS.dir/save_local.c.s

CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o: CMakeFiles/MATCOM_INVADERS.dir/flags.make
CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o: /mnt/o/Desktop/Nueva\ carpeta\ (3)/MATCOM_INVASION/FIFO_enemies_deployment.c
CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o: CMakeFiles/MATCOM_INVADERS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o -MF CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o.d -o CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o -c "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/FIFO_enemies_deployment.c"

CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/FIFO_enemies_deployment.c" > CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.i

CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/FIFO_enemies_deployment.c" -o CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.s

# Object files for target MATCOM_INVADERS
MATCOM_INVADERS_OBJECTS = \
"CMakeFiles/MATCOM_INVADERS.dir/main.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/menu.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/ship.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o" \
"CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o"

# External object files for target MATCOM_INVADERS
MATCOM_INVADERS_EXTERNAL_OBJECTS =

MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/main.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/menu.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/ship.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/print_frame.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/enemies.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/bomb.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/bullets_p_c.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/NF_linkedlist.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/save_local.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/FIFO_enemies_deployment.c.o
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/build.make
MATCOM_INVADERS: CMakeFiles/MATCOM_INVADERS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Linking C executable MATCOM_INVADERS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MATCOM_INVADERS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MATCOM_INVADERS.dir/build: MATCOM_INVADERS
.PHONY : CMakeFiles/MATCOM_INVADERS.dir/build

CMakeFiles/MATCOM_INVADERS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MATCOM_INVADERS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MATCOM_INVADERS.dir/clean

CMakeFiles/MATCOM_INVADERS.dir/depend:
	cd "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION" "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION" "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug" "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug" "/mnt/o/Desktop/Nueva carpeta (3)/MATCOM_INVASION/cmake-build-debug/CMakeFiles/MATCOM_INVADERS.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/MATCOM_INVADERS.dir/depend

