#include <iostream>
using namespace std;
#define MAX 9999
int n = 4; //

int dist[10][10] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}};
int visited = (1 << n) - 1;
int arr[16][4];
int TSP(int mark, int position)
{
    if (mark == visited)
    {
        return dist[position][0];
    }
    if (arr[mark][position] != -1)
    {
        return arr[mark][position];
    }
    int ans = MAX;

    for (int points = 0; points < n; points++)
    {
        if ((mark & (1 << points)) == 0)
        {
            int newans = dist[position][points] + TSP(mark | (1 << points), points);
            ans = min(ans, newans);
        }
    }
    return arr[mark][position] = ans;
}
int main()
{
    /* initialize the arr array */
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = -1;
        }
    }

    cout << "\n\nMinimum distance Travelled by you is : " << TSP(1, 0);
    return 0;
}