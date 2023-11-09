#include <iostream>

using namespace std;

int a_count{},
    b_count,
    c_count,
    d_count,
    f_count,
    cycle = 0,
    grade_sum,
    grade_count,
    score;
int main() {
  cout << "Enter grades: (Enter 110 to quit entering scores) ";
  while (cycle == 0) {
    cin >> score;
    grade_sum += score;
    ++grade_count;
    
    switch (score/10) {
      case 11:
        cycle = 1;
        grade_sum -= 110;
        grade_count -= 1;
        cout << "Class average is " << grade_sum/grade_count << ".";
        cout << "\nThe class total is " << grade_sum << ".";
        cout << "\nThere are " << a_count << " A's, " << b_count << " B's, " << c_count << " C's, " << d_count << " D's, and " << f_count << " F's.";
      case 10:
      case 9:
        ++a_count;
        break;
      case 8:
        ++b_count;
        break;
      case 7:
        ++c_count;
        break;
      case 6:
        ++d_count;
        break;
      default:
        ++f_count;
        break;
    }
  }
  
}