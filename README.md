# learning-space
Master Thesis Code in C++ 
Developed at Ubuntu


## How to use
This code was developed at Linux, using Ubuntu 22.04.2 LTS 

### 1.Setup 
#### Install minimal prerequisites (Ubuntu 18.04 as reference)
```
sudo apt update && sudo apt install -y cmake g++ wget unzip
```
#### Download and unpack sources
```
wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
unzip opencv.zip
```
#### Create build directory
```
mkdir -p build && cd build
```
#### Configure
```
cmake ../opencv-4.x
```
#### Build
```
cmake --build .
```
#### Install
```
sudo make install
```
#### Configure CMakeLists.txt (If it isn't configured)
```
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
```
#### At Project Folder run cmake 
```
cmake .
```
