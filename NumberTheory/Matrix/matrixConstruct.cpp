#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Matrix {
public:
    // Constructor to initialize a matrix with given rows and columns
    Matrix(int rows, int cols)
        : rows_(rows), cols_(cols), data_(rows, std::vector<int>(cols, 0)) {}

    // Constructor to initialize a matrix with given data
    Matrix(const std::vector<std::vector<int>>& data)
        : rows_(data.size()), cols_(data.empty() ? 0 : data[0].size()), data_(data) {
        // Validate matrix data
        for (const auto& row : data) {
            if (row.size() != cols_) {
                throw std::invalid_argument("All rows must have the same number of columns");
            }
        }
    }

    // Function to set the value at a specific position
    void set(int row, int col, int value) {
        if (row >= 0 && row < rows_ && col >= 0 && col < cols_) {
            data_[row][col] = value;
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    // Function to get the value at a specific position
    int get(int row, int col) const {
        if (row >= 0 && row < rows_ && col >= 0 && col < cols_) {
            return data_[row][col];
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    // Function to print the matrix
    void print() const {
        for (const auto& row : data_) {
            for (const auto& elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
    }

    // Function to get the number of rows
    int rows() const {
        return rows_;
    }

    // Function to get the number of columns
    int cols() const {
        return cols_;
    }

    // Matrix addition
    Matrix operator+(const Matrix& other) const {
        if (rows_ != other.rows_ || cols_ != other.cols_) {
            throw std::invalid_argument("Matrix dimensions must match for addition");
        }

        Matrix result(rows_, cols_);
        for (int i = 0; i < rows_; ++i) {
            for (int j = 0; j < cols_; ++j) {
                result.set(i, j, data_[i][j] + other.get(i, j));
            }
        }
        return result;
    }

    // Matrix subtraction
    Matrix operator-(const Matrix& other) const {
        if (rows_ != other.rows_ || cols_ != other.cols_) {
            throw std::invalid_argument("Matrix dimensions must match for subtraction");
        }

        Matrix result(rows_, cols_);
        for (int i = 0; i < rows_; ++i) {
            for (int j = 0; j < cols_; ++j) {
                result.set(i, j, data_[i][j] - other.get(i, j));
            }
        }
        return result;
    }

    // Matrix multiplication
    Matrix operator*(const Matrix& other) const {
        if (cols_ != other.rows_) {
            throw std::invalid_argument("Matrix dimensions must match for multiplication");
        }

        Matrix result(rows_, other.cols_);
        for (int i = 0; i < rows_; ++i) {
            for (int j = 0; j < other.cols_; ++j) {
                int sum = 0;
                for (int k = 0; k < cols_; ++k) {
                    sum += data_[i][k] * other.get(k, j);
                }
                result.set(i, j, sum);
            }
        }
        return result;
    }

    // Transposition
    Matrix transpose() const {
        Matrix result(cols_, rows_);
        for (int i = 0; i < rows_; ++i) {
            for (int j = 0; j < cols_; ++j) {
                result.set(j, i, data_[i][j]);
            }
        }
        return result;
    }

    // Determinant (only for 2x2 matrix for simplicity)
    int determinant() const {
        if (rows_ != 2 || cols_ != 2) {
            throw std::runtime_error("Determinant is only implemented for 2x2 matrices");
        }
        return data_[0][0] * data_[1][1] - data_[0][1] * data_[1][0];
    }

    // Inverse (only for 2x2 matrix for simplicity)
    Matrix inverse() const {
        if (rows_ != 2 || cols_ != 2) {
            throw std::runtime_error("Inverse is only implemented for 2x2 matrices");
        }

        int det = determinant();
        if (det == 0) {
            throw std::runtime_error("Matrix is singular and cannot be inverted");
        }

        Matrix result(2, 2);
        result.set(0, 0, data_[1][1] / det);
        result.set(0, 1, -data_[0][1] / det);
        result.set(1, 0, -data_[1][0] / det);
        result.set(1, 1, data_[0][0] / det);
        return result;
    }

private:
    int rows_;
    int cols_;
    std::vector<std::vector<int>> data_;
};
void solve(){
    int r,c;
      cin>>r>>c;
      Matrix mat(r,c);

      for (int i = 0; i < mat.rows(); i++)
      {
        for (int j = 0; j <mat.cols(); j++)
        {
            // int a;
            // cin>>a;
            // mat.set(i,j,a);
            if (i%4==0 || i%4==3)
            {
                if (j%4==0 || j%4==3)
            {
                mat.set(i,j,1);
            }
            }
            else
            {
                 if (j%4==1 || j%4==2)
            {
                mat.set(i,j,1);
            }
            }
            
            
        }
        
      }
      mat.print();

}
int main()
   {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
      
      
      

      
    return 0;
}