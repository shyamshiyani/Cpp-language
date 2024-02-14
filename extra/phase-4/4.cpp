#include <iostream>
using namespace std;

int main() {
    int viva[5] = {23, 19, 22, 28, 23};
    int wtn[5] = {65, 58, 49, 52, 64};

    int totalMarks = 0;
    double average;
    double totalSubjectMarks;
    double marksOutOf;

    cout << "Subject\t\t|Total Marks\t|Marks out of 100" << endl;
    for (int i = 0; i < 5; ++i) {
        totalSubjectMarks = viva[i] + wtn[i];
        marksOutOf = (totalSubjectMarks * 100) / 100;
        cout << "Subject " << (i + 1) << ":\t|" << totalSubjectMarks << "\t\t|" << marksOutOf << endl;
        totalMarks += totalSubjectMarks;
    }

    average = totalMarks / 5.0;

    cout << "\nFinal Total Examination Marks: " << totalMarks << " out of 500" << endl;
    cout << "Final Total Average: " << average << "/%" << " /out of 100" << endl;

    return 0;
}

