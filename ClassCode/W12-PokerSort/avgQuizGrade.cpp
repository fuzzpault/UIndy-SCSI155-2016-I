/* Name: Paul Talaga
   Date: 11/15/16
   Desc: Solution to avgQuizGrade problem on practice exam.
*/

#include <iostream>

using namespace std;

double avgQuizGrade(char student_answers[][10], unsigned num_students, char quiz_key[10]){
  float quiz_total = 0.0;
  for(int i = 0; i < num_students; i++){ // i is the student index
   // Now we grade a quiz
   int num_correct = 0;
   // For each question, see if they got the right answer
   for(int j = 0; j < 10; j++){  // j is the quiz question for student i
     if(student_answers[i][j] == quiz_key[j])num_correct++;
   }
   // Now add this students score to quiz_total
   quiz_total += (float)num_correct/ 10;
  }
  return quiz_total / num_students;
}

int main(){

  // Test with some quizzes
  char quiz_key[10] = {'A','A','B','B','C','C','D','D','A','A'};
  
  char q1[1][10] = { {'A','A','B','B','C','C','D','D','A','A'} };
  
  cout << avgQuizGrade(q1, 1, quiz_key) << " = " << 1.0 << endl;
  
  char q2[1][10] = { {'F','A','F','B','F','C','F','D','F','A'} };
  
  cout << avgQuizGrade(q2, 1, quiz_key) << " = " << 0.5 << endl;
  
  char q3[2][10] = { {'F','A','F','B','F','C','F','D','F','A'},
                     {'A','A','B','B','C','C','D','D','A','A'} };
  
  cout << avgQuizGrade(q3, 2, quiz_key) << " = " << 0.75 << endl;
  
  return 0;
}
