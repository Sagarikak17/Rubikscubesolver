#include "RubiksCube3dArray.cpp"
#include "RubiksCube1dArray.cpp"
#include "DFSSolver.h"
#include "BFSSolver.h"
#include "IDDFSSolver.h"
#include "IDAstarSolver.h"
#include "RubiksCubeBitboard.cpp"
using namespace std;

int main() {
    RubiksCube3dArray object3DArray;
    //object3DArray.print();

    /*object3DArray.l();
    object3DArray.print();

    //RubiksCube1dArray object1DArray;
    //object1DArray.print();*/

  /*  vector <RubiksCube::MOVE> movesToShuffle = object3DArray.randomShuffleCube(6);
    object3DArray.print();
    for (auto move : movesToShuffle) {
        cout<<object3DArray.getMove(move)<<" ";
        cout<<"\n";
    }

    DDDDFFFFSSSSS SOLVER 3DARRAY


    DFSSolver<RubiksCube3dArray,Hash3d> dfsSolver(object3DArray,7) ;
    vector <RubiksCube::MOVE> movesToSolve = dfsSolver.solve();
    dfsSolver.rubiksCube.print();
    for (auto move : movesToSolve) {
        cout<<object3DArray.getMove(move)<<" ";
        cout<<"\n";
    }*/

    //BBBBFFFSSSS SOLVER 3DARRAY


    /*RubiksCube3dArray cube; // Instantiate a Rubik's Cube with 3D array representation
    cube.print();

    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
    for(auto move: shuffle_moves)
        cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();

    BFSSolver<RubiksCube3dArray, Hash3d> bfsSolver(cube);
    vector<RubiksCube::MOVE> solve_moves = bfsSolver.solve();

    for(auto move: solve_moves)
        cout << cube.getMove(move) << " ";
    cout << "\n";
    bfsSolver.rubiksCube.print();*/


    //IDDFSSOLVER 3D ARRAY



    /*object3DArray.print();
    vector<RubiksCube::MOVE> shuffle_moves_3d = object3DArray.randomShuffleCube(7);
    for (auto move : shuffle_moves_3d) {
        cout << object3DArray.getMove(move) << " ";
    }
    cout << "\n";
    object3DArray.print();
    IDDFSSolver<RubiksCube3dArray, Hash3d> iddfsSolver3d(object3DArray, 7);
    vector<RubiksCube::MOVE> solve_moves_3d = iddfsSolver3d.solve();
    for (auto move : solve_moves_3d) {
        cout << object3DArray.getMove(move) << " ";
    }
    cout << "\n";
    iddfsSolver3d.rubiksCube.print();*/

    ///IDA STAR 3DARRAY

    /*vector<RubiksCube3dArray::MOVE> shuffle_moves = object3DArray.randomShuffleCube(5);
    for (auto move : shuffle_moves) {
        cout << object3DArray.getMove(move) << " ";
    }
    cout << "\n";
    object3DArray.print();

    IDAstarSolver<RubiksCube3dArray, Hash3d> IDAstarSolver(object3DArray);  // Adjust Hash3d as per your implementation
    vector<RubiksCube3dArray::MOVE> solve_moves = IDAstarSolver.solve();
    for (auto move : solve_moves) {
        cout << object3DArray.getMove(move) << " ";
    }
    cout << "\n";
    // Print cube after solving
    object3DArray.print();*/



   /* if (object3DArray.isSolved()) {
        cout<<"is solved"<<"\n";
    }
    else {cout<<"not solved"<<"\n";}

    RubiksCube3dArray cube1;
    RubiksCube3dArray cube2;

    if(cube1 == cube2) {
        cout<<"Cubes equal"<<"\n";
    } else cout<<"unequal"<<"\n";

    object3DArray.l();
    object3DArray.print();*/


    string fileName = "C:\\Database\\cornerDepth5V1.txt";



    RubiksCubeBitboard cube;
    auto shuffleMoves = cube.randomShuffleCube(10);
    cube.print();
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";

    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idaStarSolver(cube, "C:\\Database\\cornerDepth5V1.txt");
    auto moves = idaStarSolver.solve();

    idaStarSolver.rubiksCube.print();
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";


    return 0;
}
