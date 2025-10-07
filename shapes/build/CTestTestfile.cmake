# CMake generated Testfile for 
# Source directory: /home/wuuntt/1141_OOP/OOP_1141/shapes
# Build directory: /home/wuuntt/1141_OOP/OOP_1141/shapes/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(DummyTest "/home/wuuntt/1141_OOP/OOP_1141/shapes/build/dummy_test")
set_tests_properties(DummyTest PROPERTIES  _BACKTRACE_TRIPLES "/home/wuuntt/1141_OOP/OOP_1141/shapes/CMakeLists.txt;28;add_test;/home/wuuntt/1141_OOP/OOP_1141/shapes/CMakeLists.txt;0;")
add_test(ShapeTest "/home/wuuntt/1141_OOP/OOP_1141/shapes/build/shapes_test")
set_tests_properties(ShapeTest PROPERTIES  _BACKTRACE_TRIPLES "/home/wuuntt/1141_OOP/OOP_1141/shapes/CMakeLists.txt;34;add_test;/home/wuuntt/1141_OOP/OOP_1141/shapes/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
