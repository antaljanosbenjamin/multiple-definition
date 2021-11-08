project(clashing)

add_library(A STATIC libA.cpp)

add_library(B STATIC libB.cpp libBSub.cpp)

add_executable(working main.cpp)
target_link_libraries(working A B)

add_executable(failing main.cpp)
target_link_libraries(failing B A)