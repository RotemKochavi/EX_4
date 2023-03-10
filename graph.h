#ifndef GRAPH_
#define GRAPH_


typedef struct GRAPH_NODE_ *pnode;

typedef struct edge_ 
{
    int weight;
    pnode endpoint;
    struct edge_ *next;
} edge, *pedge;


typedef struct GRAPH_NODE_ 
{
    int node_num;
    pedge edges;
    struct GRAPH_NODE_ *next;
} node, *pnode;

typedef struct Dijkstra {
    pnode node;
    int weight;
    int infor;
    struct Dijkstra *next;
} dijkstra, *dijkstra_P;

void TSP_cmd(pnode head);
void printGraph_cmd(pnode head); 
void build_graph_cmd(pnode *head);
void insert_node_cmd(pnode *head);
void delete_node_cmd(pnode *head);
void deleteGraph_cmd(pnode* head);
void add_edge(pnode *head ,int i);
int shortsPath_cmd(pnode head, int src, int dest);


#endif
