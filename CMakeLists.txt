
cmake_minimum_required(VERSION 3.9)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5Core CONFIG REQUIRED)

project(UPowerTest CXX)

add_executable(UPowerTest main.cpp)

add_subdirectory(UPowerDBus)

target_link_libraries(UPowerTest UPower)
qt5_use_modules(UPowerTest Core)

install(TARGETS UPowerTest
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static
        )
