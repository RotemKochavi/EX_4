#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <limits.h>
#include "graph.h"
#include <ctype.h>

// the main of ex4 
int main()
{
    pnode temp = NULL;
    pnode *head = &temp;
    char ch ;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch == 'A')
        {
            build_graph_cmd(head);
        }
        else if (ch == 'B')
        {
            insert_node_cmd(head);
        }
        else if (ch == 'D')
        {
            delete_node_cmd(head);
        }
        else if (ch == 'S')
        {
            int src = -1, dest = -1;
            scanf("%d %d", &src, &dest);
            int dis = shortsPath_cmd(*head, src, dest);
            printf("Dijsktra shortest path: %d \n", dis);
        }
        else if (ch == 'T') 
        {
            TSP_cmd(*head);
        }
    }
    deleteGraph_cmd(head);
    return 0;
}
