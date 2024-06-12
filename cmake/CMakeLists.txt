cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyTestProject)

# logging information
message(STATUS "Configuring ${PROJECT_NAME}")

# Add an executable target
add_executable(main  main.cpp)
message(STATUS "Executable added: main")

# Add sub-projects
add_subdirectory(src/MyTestSubProject1)
add_subdirectory(src/MyTestSubProject2)

message(STATUS "Sub-projects added (if any)")

# Specify installation directory for the executable
# Set CMAKE_INSTALL_PREFIX to specific directory (In this case setting it to current working directory)
set(CMAKE_INSTALL_PREFIX $ENV{PWD})
message(STATUS "Installation directory: ${CMAKE_INSTALL_PREFIX}")
install(TARGETS main DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

# Install targets from sub-projects
install(TARGETS MyTestSubProject1_target DESTINATION ${CMAKE_INSTALL_PREFIX}/bin/MyTestSubProject1)
install(TARGETS MyTestSubProject2_target DESTINATION ${CMAKE_INSTALL_PREFIX}/bin/MyTestSubProject2/)

add_subdirectory(tests)
message (STATUS "Test directory added ")