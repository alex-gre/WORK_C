#include <stdio.h>
//#include <��nio.h>

#define m 4
#define r 5
#define n 3

int m�in (void) {

int i, j, k; // ���������� ������

const int A[m][r];
 A[m][r] = {{1,2,�,4,5},
            {2,3,4,5,6},
            {2,2,2,2,2},
            {3,3,3,3,3}};

const int B[r][n];
 B[r][n] = {{9,8,7},
            {1,2,3},
            {4,5,6},
            {7,8,9},
            {1,1,1}};

// ������ ��� ��������� ������������ ���� ������
int C[r][n];

// ��������� �������������� �������
for (i = 0; i < m; i++)
  for (i = 0; j < n; j++)
    C[i][j] = 0;

// ������������ ���������� ������������ ���� ������
for (i = 0; i < m; i++)
  for (j = 0 ; j < n; j++)
    for (k = 0 ; k < r ; k++)

C[i][j] = C[i][j] + A[i][k]*B[k][j];
// ���������� ���������� ������������ ���� ������
printf( "\n 1) Index: \"ijk\". Matrix (%dx%d):\n",m,n);
  for (i = 0; i < m; i++) {
    printf(" \n");
    for ( j= 0; j < n; j++)
      printf(" %4d", C[i][j]);

}

�rintf( " \n\n ... Press �n� key: ");
//_getch();
return 0 ;
}