#include <iostream>
using namespace std;


void calculateCubes(const int input[], int output[], int size) 
{
	int i;
    for (i = 0; i < size; ++i) {
        output[i] = input[i] * input[i] * input[i];
    }
}

double calculateAverage(const int array[], int size)
{
    double sum = 0;
    int i;
    for (i = 0; i < size; ++i) 
	{
        sum += array[i];
    }
    return sum / size;
}

string determineKind(double average) {
    if (average >= 22 && average <= 35)
	{
        return "TIGHT";
    } else if (average > 35 && average <= 50) 
	{
        return "BALANCED";
    } else if (average > 50) 
	{
        return "TOXIC";
    } else 
	{
        return "LOOSE";
    }
}

int main() {
    int size = 5;
    int input[size] = {1, 2, 3, 4, 5},output[size];

    calculateCubes(input, output, size);

    double average = calculateAverage(output, size);

    string kind = determineKind(average);

    cout << "Average value: " << average << endl;
    cout << "Array kind: " << kind << endl;

    return 0;
}

