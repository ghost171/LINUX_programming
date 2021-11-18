# CMake generated Testfile for 
# Source directory: /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps
# Build directory: /home/ghost17/LINUX_programming/LINUX_programming/08_Regexps
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(FirstTest "main" "strings" "s" "bb")
set_tests_properties(FirstTest PROPERTIES  FAIL_REGULAR_EXPRESSION "Error!" PASS_REGULAR_EXPRESSION "bbtrings" _BACKTRACE_TRIPLES "/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeLists.txt;18;add_test;/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeLists.txt;0;")
add_test(SecondTest "main" "HelloToThem" "The" "bb")
set_tests_properties(SecondTest PROPERTIES  FAIL_REGULAR_EXPRESSION "Error!" PASS_REGULAR_EXPRESSION "HelloTobbm" _BACKTRACE_TRIPLES "/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeLists.txt;20;add_test;/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeLists.txt;0;")
add_test(ThirdTest "main" "Hello To Them" "The" "bb")
set_tests_properties(ThirdTest PROPERTIES  FAIL_REGULAR_EXPRESSION "Error!" PASS_REGULAR_EXPRESSION "Hello To bbm" _BACKTRACE_TRIPLES "/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeLists.txt;22;add_test;/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeLists.txt;0;")
add_test(ForthTest "main" "Hello TTheo Them abc" "abc" "bb")
set_tests_properties(ForthTest PROPERTIES  FAIL_REGULAR_EXPRESSION "Error!" PASS_REGULAR_EXPRESSION "Hello TTheo Them bb" _BACKTRACE_TRIPLES "/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeLists.txt;24;add_test;/home/ghost17/LINUX_programming/LINUX_programming/08_Regexps/CMakeLists.txt;0;")
