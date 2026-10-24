cmake_minimum_required(VERSION 3.20)
project(Cpp20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compiles your root main.cpp
add_executable(Cpp20 main.cpp)

# Dynamically aggregate all source files in the target directory
file(GLOB CP_FILES "Newbie_800/*.cpp")

foreach(file_path ${CP_FILES})
    # Extract the base filename without the extension to serve as the target name
    get_filename_component(target_name "${file_path}" NAME_WE)

    # Define the executable target using ONLY the individual source file
    add_executable(${target_name} "${file_path}")

    # Route the compiled executable to the isolated build directory
    set_target_properties(${target_name} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/Newbie_800"
    )
endforeach()