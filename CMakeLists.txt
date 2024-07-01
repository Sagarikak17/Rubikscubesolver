cmake_minimum_required(VERSION 3.28)
project(Rubikscubesolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubikscubesolver main.cpp
        RubiksCube.cpp
        RubiksCube.h
        RubiksCube3dArray.cpp
        RubiksCube1dArray.cpp
        DFSSolver.h
        BFSSolver.h
        IDDFSSolver.h
        IDAstarSolver.h
        CornerDBMaker.cpp
        CornerDBMaker.h
        CornerPatternDatabase.cpp
        CornerPatternDatabase.h
        NibbleArray.cpp
        NibbleArray.h
        PatternDatabase.cpp
        PatternDatabase.h
        PermutationIndexer.h
        math.cpp
        math.h
        RubiksCubeBitboard.cpp
)
