cmake_minimum_required(VERSION 3.0.0)
project(learning_space VERSION 0.1.0)

# Find OpenCV
find_package(OpenCV REQUIRED)

# Add an executable target
add_executable(learning_space main.cpp)

# Link OpenCV to the target
target_link_libraries(learning_space ${OpenCV_LIBS})

# Include OpenCV headers (scoped to the target)
target_include_directories(learning_space PRIVATE ${OpenCV_INCLUDE_DIRS})