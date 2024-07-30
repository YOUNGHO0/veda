//
// Created by lee on 2024. 7. 30..
//

#include <fstream>
#include <iostream>


class Circle {

public:
    int radius;
    friend std::ofstream& operator<<(std::ofstream& stream,  Circle& c);
};

std::ofstream& operator<<(std::ofstream& stream,  Circle& c) {
    stream << "Circle radius: " << c.radius;
    return stream;  // Return the stream for chaining
}

int main() {

    // Open the file for writing
    std::ofstream fout;
    fout.open("song.txt");

    // Check if the file was opened successfully
    if (!fout) {
        std::cout << "파일이 없어요" << std::endl;
        return 1;  // Exit the program if file opening fails
    }

    // Create and initialize a Circle object
    Circle c1;
    c1.radius = 10;  // Initialize the radius of the circle

    // Other data to write to the file
    int age = 21;
    char singer[] = "kim";
    char song[] = "yesterDay";

    // Write data to the file
    fout << age << '\n';
    fout << singer << std::endl;
    fout << song << std::endl;
    fout << c1; // Write Circle object to the file

    // Close the file
    fout.close();

    return 0;

}



