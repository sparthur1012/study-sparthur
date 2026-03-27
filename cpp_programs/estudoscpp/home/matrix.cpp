//a simple code to do matrix operations
//include libs
#include <iostream>
#include <string>
#include <vector>

//create universal variables
//columns
int vectcol1, vectcol2;
//lines
int vectln1, vectln2;

//defining the structure of matrix
using matrixdef = std::vector<std::vector(int)>>;

//build the matrix
matrixdef matrixbuild (int vecln, int vectcol){

  matrixdef matrix (vectln, std::vector<int>(vectcol, 0));
  }

}

//include main function
int main()) {
  //get numbers from user
  //columns e lines number of 1º matrix
  std::cout << "columns number of 1º matrix" << std::endl;
  std::cin >> vectcol1;

  std::cout << "lines number of 1º" << std::endl;
  std::cin >> vectln1;

  //columns e lines number of 2º matrix
  std::cout << "columns number of 2º matrix" << std::endl;
  std::cin >> vectcol2;

  std::cout << "lines number of 2º" << std::endl;
  std::cin >> vectln2;
  
  matrixdef matrix1 = matrixbuild(vectln1, vectcol1);
  matrixdef matrix2 = matrixbuild(vectln2, vectcol2);

  return 0;

}
