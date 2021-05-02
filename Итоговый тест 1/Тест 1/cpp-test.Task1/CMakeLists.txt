cmake_minimum_required(VERSION "3.7.1")

project("cpp-test-task1")

add_executable("${PROJECT_NAME}" "main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES "main.cpp" DESTINATION src)