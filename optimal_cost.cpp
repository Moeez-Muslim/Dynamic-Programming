#include <iostream>
using namespace std;

const int SIZE = 20;
const int MAX = INT_MAX;

int optimal_cost(int costs[SIZE][SIZE], int n, int path[SIZE])
{
    int current = n - 1;
    int index = 0;
    int previous[SIZE];
    int arr[SIZE];

    arr[0] = 0;
    for (int i = 1; i < n; i++) 
    {
        arr[i] = INT_MAX;
        for (int j = 0; j < i; j++) 
        {
            //arr[i] = min(arr[i], arr[j] + costs[j][i]);
            if (arr[j] != INT_MAX && arr[i] > arr[j] + costs[j][i]) 
            {
                arr[i] = arr[j] + costs[j][i];
                previous[i] = j;
            }
        }
    }

    while (current != 0)
    {
        path[index++] = current;
        current = previous[current];
    }
    path[index++] = current;
    reverse(path, path + index);
   
    return arr[n - 1];
}

int main() 
{
    int n = 12;
    int path[SIZE];
    int costs[SIZE][SIZE] = 
    { 
        {0,80,70,40,20,90,120,180,200,320,410,560},
        {0,0,70,40,10,60,100,250,400,550,630,650},
        {0,0,0,10,40,60,80,120,260,290,330,470},
        {0,0,0,0,90,170,40,210,300,430,470,490},
        {0,0,0,0,0,100,240,410,430,510,550,590},
        {0,0,0,0,0,0,100,200,300,350,400,550},
        {0,0,0,0,0,0,0,170,190,160,220,230},
        {0,0,0,0,0,0,0,0,190,280,390,490},
        {0,0,0,0,0,0,0,0,0,500,530,570},
        {0,0,0,0,0,0,0,0,0,0,580,610},
        {0,0,0,0,0,0,0,0,0,0,0,620},
        {0,0,0,0,0,0,0,0,0,0,0,0}
    };
   
    for (int i = 0; i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            if (i >= j)
                costs[i][j] = MAX;
        }
    }

    for (int i = 0; i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            cout << costs[i][j] << " ";
        }
        cout << endl;
    }
    int cost = optimal_cost(costs, n, path);
    cout << "Optimal Cost = " << cost << endl;
    cout << "Optimal Path: ";
    for (int i = 0; i < n; i++) 
    {
        if (path[i] >= 0)
        {
            cout << path[i] + 1 << " ";
        }
    }
    return 0;
}
