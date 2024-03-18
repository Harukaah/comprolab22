#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

int calculateAverage(const std::vector<double>& numbers) {
    double sum = 0.0;
    for (double num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        std::cout << "Please input numbers to find average." << std::endl;
        return 0;
    }

    std::vector<double> numbers;
    for (int i = 1; i < argc; ++i) {
        std::istringstream iss(argv[i]);
        double num;
        if (iss >> num) {
            numbers.push_back(num);
        } else {
            std::cout << "Invalid input. Please enter numeric values only." << std::endl;
            return 1;
        }
    }

    double average = calculateAverage(numbers);
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Average of " << numbers.size() << " numbers = " << average << std::endl;
    std::cout << "---------------------------------" << std::endl;

    return 0;
}
