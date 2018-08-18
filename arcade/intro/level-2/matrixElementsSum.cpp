int matrixElementsSum(std::vector<std::vector<int>> matrix) {
  int result {0};
  
  for (int c = 0; c < matrix.at(0).size(); c++) {
    for (int r = 0; r < matrix.size(); r++) {
      if (matrix.at(r).at(c) == 0)
        break;
      
      result += matrix.at(r).at(c);
    }
  }
  
  return result;
}
