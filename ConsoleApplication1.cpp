
#include <iostream>
#include <algorithm>
#include "stos.cpp"
#include "sort.cpp"
using namespace std;


    int main()
    {
        //zad 1
        int tab[] = { 4,3,2,6,1 };
        char tab2[] = { 'b', 'c','a','d' };
        double tab3[] = { 2.1, 4.76, 1.7, 3,18 };
        sort_q<int>(tab, 4);
        sort_w<char>(tab2, 4);
        sort_b<double>(tab3, 4);

        for (int i = 0; i < 5; i++)
        {
            cout << tab[i];
        }
        cout << "\n";
        for (int i = 0; i < 4; i++)
        {
            cout << tab2[i];
        }
        cout << "\n";
        for (int i = 0; i < 4; i++)
        {
            cout << tab3[i]<<"\t";
        }
        cout << "\n\n-----------zad2---------\n";

        //zad 2

        Stack<int> st_int;
        Stack<string> st_str;

        st_int.push(6);
        st_int.push(3);
        st_int.push(12);

        cout <<"element na gorze: " << st_int.topElement() << endl;
        st_int.pop();
        cout << "element na gorze po usunieciu: " << st_int.topElement() << endl<<endl;

        st_str.push("string1");
        st_str.push("string2");
        st_str.push("string3");

        cout << "element na gorze: " << st_str.topElement() << endl;
        st_str.pop();
        cout << "element na gorze po usunieciu: " << st_str.topElement() << endl;

        return 0;
    }
