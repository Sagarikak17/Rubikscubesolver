#include "RubiksCube3dArray.cpp"
#include "RubiksCube1dArray.cpp"
#include "DFSSolver.h"
#include "BFSSolver.h"
using namespace std;

int main() {
    //RubiksCube3dArray object3DArray;
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
    DFSSolver<RubiksCube3dArray,Hash3d> dfsSolver(object3DArray,7) ;
    vector <RubiksCube::MOVE> movesToSolve = dfsSolver.solve();
    dfsSolver.rubiksCube.print();
    for (auto move : movesToSolve) {
        cout<<object3DArray.getMove(move)<<" ";
        cout<<"\n";
    }*/

    RubiksCube3dArray cube; // Instantiate a Rubik's Cube with 3D array representation
    cube.print();

    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
    for(auto move: shuffle_moves)
        cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();

    // Create a BFS solver object with RubiksCube3DArray and an appropriate hash function
    BFSSolver<RubiksCube3dArray, Hash3d> bfsSolver(cube);
    vector<RubiksCube::MOVE> solve_moves = bfsSolver.solve();

    for(auto move: solve_moves)
        cout << cube.getMove(move) << " ";
    cout << "\n";
    bfsSolver.rubiksCube.print();






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

    return 0;
}
