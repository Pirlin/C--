#include <iostream>
 #include <algorithm>

 using namespace std;
 int compare(int a, int b)
 {
    return (a > b);
 }

int main()
{
    int data[] = {1, 2, 3, 4, 5};
    sort(data, data+5, compare);
    for (int i = 0; i < 5; i++)
    {
        cout << data[i] << " ";
    }
    return 0;

}