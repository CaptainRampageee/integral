# add the executable
add_executable(Project Source.cpp)

target_link_libraries(Project PUBLIC ProjectLib)

target_include_directories(Project PUBLIC
                          "C:/integral/boost"
                          )

target_link_directories(Project PUBLIC
                          "C:/integral/boost/stage/lib"
                          )