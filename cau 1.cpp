#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream tep_vao("test.txt");
    ofstream tep_ra("output.txt");

    int hang, cot;
    tep_vao >> hang >> cot;
    int** A = new int* [hang];
    for (int i = 0; i < hang; i++) {
        A[i] = new int[cot];
        for (int j = 0; j < cot; j++) tep_vao >> A[i][j];
    }
    tep_vao.close();

    int lon_nhat = A[0][0], lon_nhi = A[0][0];
    for (int i = 0; i < hang; i++)
        for (int j = 0; j < cot; j++) {
            if (A[i][j] > lon_nhat) { lon_nhi = lon_nhat; lon_nhat = A[i][j]; }
            else if (A[i][j] > lon_nhi && A[i][j] != lon_nhat) lon_nhi = A[i][j];
        }

    int* tong_cot = new int[cot] {};
    for (int j = 0; j < cot; j++)
        for (int i = 0; i < hang; i++) tong_cot[j] += A[i][j];

    int** C = new int* [hang];
    for (int i = 0; i < hang; i++) {
        int nho_nhat = A[i][0];
        for (int j = 1; j < cot; j++) if (A[i][j] < nho_nhat) nho_nhat = A[i][j];
        C[i] = new int[cot];
        for (int j = 0; j < cot; j++) C[i][j] = A[i][j] * nho_nhat;
    }

    tep_ra << "So lon nhat: " << lon_nhat << "\nSo lon nhi: " << lon_nhi << "\nTong cac cot: ";
    for (int j = 0; j < cot; j++) tep_ra << tong_cot[j] << " ";
    tep_ra << "\nMang C:\n";
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) tep_ra << C[i][j] << " ";
        tep_ra << "\n";
    }
    tep_ra.close();

    for (int i = 0; i < hang; i++) { delete[] A[i]; delete[] C[i]; }
    delete[] A; delete[] C; delete[] tong_cot;
    return 0;
}
