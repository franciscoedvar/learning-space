cmake_minimum_required(VERSION 3.0.0)
project(learning_space VERSION 0.1.0)

# Include the configuration file
include(CMakeConfig.cmake)

# Find OpenCV
find_package(OpenCV REQUIRED)

# Add an executable target
add_executable(learning_space main.cpp)

# Link OpenCV to the target
target_link_libraries(learning_space ${OpenCV_LIBS})

# Include OpenCV headers (scoped to the target)
target_include_directories(learning_space PUBLIC ${OpenCV_INCLUDE_DIRS})
target_include_directories(learning_space PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/data_handler)

# Process the config.h.in template and generate config.h
configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)

# Include the build directory in the include path so config.h can be found
target_include_directories(learning_space PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

get_target_property(INCLUDES learning_space INCLUDE_DIRECTORIES)
message(STATUS "Include directories for learning_space: ${INCLUDES}")
