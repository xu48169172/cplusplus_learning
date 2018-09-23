
cmake_minimum_required (VERSION 2.8)

project (cplusplus)

add_executable(array cplus_basic/array.cpp)

add_executable(referece ./cplus_basic/referece.cpp)

add_executable(hello ./class_new/hello.cpp)
add_executable(logstream ./example/logstream.cpp)
add_executable(hello_convert ./using_class/class_convert/hello.cpp)
add_executable(hello_override ./using_class/operator_override/hello.cpp)
add_executable(hello_instance ./Inheritance/simple_inheritance_class/hello.cpp)
add_executable(hello_poly ./Inheritance/polymorphism/hello.cpp)
