cmake_minimum_required(VERSION 2.8)

project(Substituion)

set(SOURCE_EXE esub.c)

set(SOURCE_LIB replace.c)

add_library(replace STATIC ${SOURCE_LIB})	

add_executable(main ${SOURCE_EXE})

target_link_libraries(main replace)	

file(REMOVE libreplace.a)


add_test(FirstTest main strings s bb)

add_test(SecondTest main HelloToThem The bb)

add_test(ThirdTest main "Hello To Them" The bb)

add_test(ForthTest main "Hello TTheo Them abc" abc bb)

enable_testing()

set_tests_properties(FirstTest PROPERTIES
PASS_REGULAR_EXPRESSION "bbtrings"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(SecondTest PROPERTIES
PASS_REGULAR_EXPRESSION "HelloTobbm"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(ThirdTest PROPERTIES
PASS_REGULAR_EXPRESSION "Hello To bbm"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(ForthTest PROPERTIES
PASS_REGULAR_EXPRESSION "Hello TTheo Them bb"
FAIL_REGULAR_EXPRESSION "Error!")

file(REMOVE *.a)
file(REMOVE libreplace.a)
file(REMOVE cmake_install.cmake)
file(REMOVE CMakeCache.txt)
file(REMOVE_RECURSE Testing)
file(REMOVE main)
file(REMOVE CTestTestfile.cmake)
file(REMOVE CMakeCache.txt)
file(REMOVE_RECURSE CMakeFiles)