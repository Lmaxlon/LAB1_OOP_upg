#pragma once
#include <chrono>
#include <thread>
#include "line.h"
using namespace std;
bool isNull(int c);
List modify(List* l, int m, int n);


void extract(List* l, int m, int n);

void clear(List* l);

template <class T>
        int get(T& a)
        {
            while(true)
            {
                cin >> a;
                if(cin.good())
                {
                    break;
                }
                if(cin.eof())
                {
                    std::cout << "You input End of file, exit...!" << std::endl;
                    for (int i = 0; i < 29; ++i){
                        std::cout << "-" << std::flush ;
                        std::this_thread::sleep_for(std::chrono::milliseconds(50));
                    }
                    exit(EOF);
                }
                if (!cin.good())
                {
                    cout << "\nError! Repeat your input please!\n";
                    cin.clear();
                    cin.ignore(32767, '\n');
                }
            }
        }

