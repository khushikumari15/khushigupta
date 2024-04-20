#include <iostream>

using namespace std;

void drawSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void drawRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    cout << "Choose a shape to draw:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            int squareSize;
            cout << "Enter size of the square: ";
            cin >> squareSize;
            drawSquare(squareSize);
            break;
        case 2:
            int rectWidth, rectHeight;
            cout << "Enter width of the rectangle: ";
            cin >> rectWidth;
            cout << "Enter height of the rectangle: ";
            cin >> rectHeight;
            drawRectangle(rectWidth, rectHeight);
            break;
        default:
            cout << "Invalid choice!";
            break;
    }

    return 0;
}