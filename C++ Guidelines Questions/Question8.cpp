// Create a Matrix class. Write a menu-driven program to perform following Matrix
// operations (exceptions should bethrown by the functions if matrices passed to them are
// incompatible and handled by the main() function):
// a. Sum
// b. Product
// c. Transpose


#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Matrix {
private:
    vector<vector<int>> mat;
    int rows, cols;

public:
    // Constructor to input matrix
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(r, vector<int>(c));
    }

    void input() {
        cout << "Enter elements (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> mat[i][j];
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix add(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols)
            throw invalid_argument("Matrix dimensions do not match for addition!");

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }

    Matrix multiply(const Matrix& other) const {
        if (cols != other.rows)
            throw invalid_argument("Matrix dimensions do not match for multiplication!");

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < other.cols; ++j)
                for (int k = 0; k < cols; ++k)
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
        return result;
    }

    Matrix transpose() const {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[j][i] = mat[i][j];
        return result;
    }

    int getRows() const { return rows; }
    int getCols() const { return cols; }
};

// ------------------ MAIN FUNCTION ------------------
int main() {
    int choice;
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for Matrix A: ";
    cin >> r1 >> c1;
    Matrix A(r1, c1);
    A.input();

    cout << "Enter rows and columns for Matrix B: ";
    cin >> r2 >> c2;
    Matrix B(r2, c2);
    B.input();

    do {
        cout << "\n--- MATRIX OPERATIONS ---\n";
        cout << "1. Sum (A + B)\n";
        cout << "2. Product (A x B)\n";
        cout << "3. Transpose of A\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1: {
                    Matrix sum = A.add(B);
                    cout << "Result (A + B):\n";
                    sum.display();
                    break;
                }
                case 2: {
                    Matrix prod = A.multiply(B);
                    cout << "Result (A x B):\n";
                    prod.display();
                    break;
                }
                case 3: {
                    Matrix trans = A.transpose();
                    cout << "Transpose of A:\n";
                    trans.display();
                    break;
                }
                case 4:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice!\n";
            }
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }

    } while (choice != 4);

    return 0;
}
