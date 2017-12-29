cmake_minimum_required(VERSION 2.6)



#Configuration du projet

project(taquinSolveur)

set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})



#Configuration de l'exécutable

file(

  GLOB_RECURSE

  source_files
  
  src/*.cpp
  src/include/*.h
  src/main/main.cpp
  )

file(

  GLOB_RECURSE

  test_files
  
  src/*.cpp
  src/include/*.h
  src/test/test.cpp
  )

add_executable(

  main

  ${source_files}

  )

add_executable(

  test

  ${test_files}

  )
