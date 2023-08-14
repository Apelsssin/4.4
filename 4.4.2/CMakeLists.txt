cmake_minimum_required (VERSION 3.10)
project (MyProject)
add_executable(MyProject 4.4.2.cpp List.h List.cpp ListNode.h ListNode.cpp)

add_subdirectory(Catch2 Catch2-build)
add_executable(MyProjectTest test.cpp List.h List.cpp ListNode.h ListNode.cpp)
target_link_libraries (MyProjectTest PRIVATE Catch2::Catch2)