#include <iostream>
using namespace std;

int main()
{
int mat1[50][50];
int mat2[50][50];
int matr[50][50];
int r1, c1, r2, c2;
int i, j;
bool x;
cout << "Enter No. Of Rows {1}: ";
cin >> r1;

cout << "Enter No. Of Columns {1}: ";
cin >> c1;

cout << "Enter No. Of Rows {2}: ";
cin >> r2;

cout << "Enter No. Of Columns {2}: ";
cin >> c2;

cout<<"Enter Elements for First Matrix"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>mat1[i][j];
        }
    }
cout<<"Enter Elements for Second Matrix"<<endl;
for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>mat2[i][j];
        }
    }

cout<<"First Matrix"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout<<mat1[i][j]<<"  ";
        }
        cout<<endl;
    }
cout<<" Second Matrix"<<endl;
for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;

    }



if (r1 == r2 && c1 == c2)
{
    x=true;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            matr[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

else 
{
    cout << "Addition Not Possible: ";
    
}
if(x==true)
{
for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
           cout << matr[i][j]<<" ";

        }
   cout << endl;
    }
}
 return 0;
}