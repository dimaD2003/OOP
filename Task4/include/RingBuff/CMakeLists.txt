project (Task4)

add_library(RingBuff RingBuff.cpp)

target_include_directories(RingBuff PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
