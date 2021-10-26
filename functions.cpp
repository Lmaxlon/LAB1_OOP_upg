#include "types.h"
using namespace std;

bool isNull(int c)
{
    return c>0 ? true : false;
}


List modify(List* l, int m, int n)
{
    cout << endl;
    List tmp;
    int maxV[m];
    int maxX[m];
    Node* ptr = l->head;
    for (int i = 0; i < m; i++)
    {
        maxV[i]=0;
        maxX[i]=0;
    }

    if (l->head)
    {
        while(ptr)
        {
            if (maxV[ptr->y] == 0 || ptr->value > maxV[ptr->y])
            {
                maxV[ptr->y] = ptr->value; //массив с элементами
                maxX[ptr->y] = ptr->x; //массив с позицией элемента в строке
            }
            ptr = ptr->next;
        }


        ptr = l->head;
        while(ptr)
        {
            if (ptr->x <= maxX[ptr->y])
            {
                tmp.push_back(ptr->y, ptr->x, ptr->value);
            }
            ptr = ptr->next;
        }


    }
    return tmp;
}


void extract(List* l, int m, int n)
{
    int matr[m][n];
    for (int j = 0; j < m; ++j)
    {
        for (int i = 0; i < n; ++i) matr[j][i] = 0;
    }
    Node *cur = l->head;
    while(cur != nullptr)
    {
        matr[cur->y][cur->x] = cur->value;
        cur = cur->next;
    }
    for (int j = 0; j < m; ++j)
    {
        for (int i = 0; i < n; ++i) cout << matr[j][i] << "\t";
        cout << endl;
    }
}


void clear(List* l)
{
    if (l->head)
    {
        Node* n = l->head;
        Node* ex;
        while(n)
        {
            ex = n;
            delete ex;
            n = n ->next;
        }
    }
}


