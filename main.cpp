#include<iostream>
#include "functions.cpp"
#include "line.cpp"


int main()
{
    int m,n,input;
    cout << "Input M&N:     " << endl;
    get(m);
    get(n);
    List L;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Input Matrix[" << j << "]" << "[" << i << "]:    ";
            get(input);
            if (isNull(input)) L.push_back(j,i,input);
        }
        cout << endl;
    }
    extract(&L,m,n);
    //L.print();

    List res = modify(&L,m,n);
    extract(&res,m,n);

    clear(&L);
    clear(&res);
}