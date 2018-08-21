vector<string> allLongestStrings(vector<string> inputArray) {
  vector<string> longests {};
  int longest_size {0}, size {0};
  
  for (int i = 0; i < inputArray.size(); i++) {
    size = inputArray[i].size();
    
    if (size > longest_size) {
      longest_size = size;
      longests = vector<string>();
      longests.push_back(inputArray[i]);
    } else if (size == longest_size) {
      longests.push_back(inputArray[i]);
    }
  }
  
  return longests;
}
