cmake_minimum_required (VERSION 3.20.2)
project (Repo1)
set (CMAKE_INSTALL_PREFIX .)
add_executable (${PROJECT_NAME} src/main.cpp)
target_include_directories (${PROJECT_NAME} PUBLIC include)

#add_subdirectory(path)
#add_library(path path.cxx)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)


