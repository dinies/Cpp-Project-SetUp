add_executable(
  dummyGTest
  dummyGTest.cpp
  )
target_link_libraries(
  dummyGTest
  gtest_main
  )

add_test(
  NAME dummyGTest
  COMMAND dummyGTest 
  )
