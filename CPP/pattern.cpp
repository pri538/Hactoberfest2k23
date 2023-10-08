#include <iostream>

void printRightAngledTriangle(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void printInvertedRightAngledTriangle(int rows) {
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void printSquare(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows; ++j) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void printDiamond(int rows) {
    int i, j, space = 1;

    space = rows - 1;

    for (j = 1; j <= rows; j++) {
        for (i = 1; i <= space; i++)
            std::cout << " ";

        space--;

        for (i = 1; i <= 2 * j - 1; i++)
            std::cout << "*";

        std::cout << "\n";
    }

    space = 1;

    for (j = 1; j <= rows - 1; j++) {
        for (i = 1; i <= space; i++)
            std::cout << " ";

        space++;

        for (i = 1; i <= 2 * (rows - j) - 1; i++)
            std::cout << "*";

        std::cout << "\n";
    }
}

void printPyramid(int rows) {
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++)
            std::cout << " ";

        for (k = 1; k < 2 * i; k++)
            std::cout << "*";

        std::cout << "\n";
    }
}

int main() {
    int choice;
    int rows;
    char repeat;

    do {
        std::cout << "Choose a pattern:\n";
        std::cout << "1. Right-angled triangle\n";
        std::cout << "2. Inverted right-angled triangle\n";
        std::cout << "3. Square\n";
        std::cout << "4. Diamond\n";
        std::cout << "5. Pyramid\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cout << "Enter the number of rows: ";
        std::cin >> rows;

        switch (choice) {
            case 1:
                printRightAngledTriangle(rows);
                break;
            case 2:
                printInvertedRightAngledTriangle(rows);
                break;
            case 3:
                printSquare(rows);
                break;
            case 4:
                printDiamond(rows);
                break;
            case 5:
                printPyramid(rows);
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }

        std::cout << "Do you want to generate another pattern? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
