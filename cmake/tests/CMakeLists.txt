cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyCTestProject)

add_executable(test_hello test_hello.c)
add_executable(test1 test1.c)
add_executable(test2 test2.c)
add_executable(test3 test3.c)
add_executable(test4 test4.c)
add_executable(test5 test5.c)
add_executable(test6 test6.c)
add_executable(test7 test7.c)
add_executable(test8 test8.c)

# Register tests
enable_testing()
add_test(NAME TestHello COMMAND test_hello)
add_test(NAME Test1 COMMAND test1)
add_test(NAME Test2 COMMAND test2)
add_test(NAME Test3 COMMAND test3)
add_test(NAME Test4 COMMAND test4)
add_test(NAME Test5 COMMAND test5)
add_test(NAME Test6 COMMAND test6)
add_test(NAME Test7 COMMAND test7)
add_test(NAME Test8 COMMAND test8)
