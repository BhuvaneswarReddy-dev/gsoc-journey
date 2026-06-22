#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    double testScores[3];
    int scoreCount;

public:
    Student(string studentName, double scores[], int count) {
        name = studentName;
        scoreCount = count;

        for (int i = 0; i < count && i < 3; i++) {
            testScores[i] = scores[i];
        }
    }

    double Average() {
        if (scoreCount == 0) {
            cout << "[Warning] No test scores available for " << name << "\n" ;
            return 0.0;
        }

        double sum = 0.0;
        for (int i = 0; i < scoreCount; i++) {
            sum += testScores[i];
        }

        return sum / scoreCount;
    }

    string getName() {
        return name;
    }
};

int main() {
    double Anny[3] = {85.5, 90.0, 92.5};
    Student student1("Anny", Anny, 3);
    cout << student1.getName() << "'s Average: " << student1.Average() << "\n";

    double bob[3] = {};
    Student student2("Bob", bob, 0);
    cout << student2.getName() << "'s Average: " << student2.Average() << "\n";

    return 0;
}