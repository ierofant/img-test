project(mytest)
cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED)
find_package(JPEG REQUIRED)

aux_source_directory(src SOURCE)
add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} ${JPEG_LIBRARIES})
