
cmake_minimum_required(VERSION 3.9)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core CONFIG REQUIRED)

project(UPowerTest CXX)

add_executable(UPowerTest main.cpp)

add_subdirectory(UPowerDBus)

target_include_directories(UPowerTest PRIVATE UPower)
target_link_libraries(UPowerTest UPower)
target_link_libraries(UPowerTest Qt5::Core)
