#include <bits/stdc++.h>
using namespace std;
void BFAlgo(int grp[][3], int V, int E,
            int src)
{
    int distance[V];
    for (int i = 0; i < V; i++)
        distance[i] = INT_MAX;
    distance[src] = 0;
    for (int i = 0; i < V - 1; i++)
    {

        for (int j = 0; j < E; j++)
        {
            if (distance[grp[j][0]] != INT_MAX && distance[grp[j][0]] + grp[j][2] <
                                                      distance[grp[j][1]])
                distance[grp[j][1]] =
                    distance[grp[j][0]] + grp[j][2];
        }
    }

    for (int i = 0; i < E; i++)
    {
        int x = grp[i][0];
        int y = grp[i][1];
        int weight = grp[i][2];
        if (distance[x] != INT_MAX &&
            distance[x] + weight < distance[y])
            cout << "grp contains negative weight cycle" << endl;
    }

    cout << "Vertex distance from Source" << endl;
    for (int i = 0; i < V; i++)
        cout << i << "\t\t" << distance[i] << endl;
}

int main()
{
    system("cls");
    int V = 5;
    int E = 8;

    int grp[][3] = 
    {{0, 1, -1},{0, 2, 4}, 
     {1, 2, 3},{1, 3, 2}, 
     {1, 4, 2},{3, 2, 5}, 
     {3, 1, 1},{4, 3, -3}};

    BFAlgo(grp, V, E, 0);
    return 0;
}