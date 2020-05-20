add_library( dummy_class
  dummy.cpp
)

target_include_directories(
  dummy_class PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
