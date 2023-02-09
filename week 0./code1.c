
DIAGONAL DIFFERENCE
int diagonalDifference(int r, int c, int** a) {
    int sum1=0,sum2=0;
    for(int i=0;i<r;i++)
{for(int j=0;j<c;j++){
    if(i==j)
    { sum1+=a[i][j];
    }
if(i+j==r-1)
{sum2+=a[i][j];}
}}
return abs(sum1-sum2);}
