#include <climits>

bool almostIncreasingSequence(std::vector<int> sequence) {
  int strikes {0}, first_max {INT_MIN}, second_max {INT_MIN};
  
  for (int i = 0; i < sequence.size(); i++) {
    if (sequence.at(i) > first_max) {
      second_max = first_max;
      first_max = sequence.at(i);
    } else if (sequence.at(i) > second_max) {
      first_max = sequence.at(i);
      strikes++;
    } else {
      strikes++;
    }
  }
  
  return strikes <= 1;
}
