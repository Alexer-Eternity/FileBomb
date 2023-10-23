#include <iostream>
using namespace std;

int main() {
#ifdef _WIN32
    while(1) system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#else
    while(1) system("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#endif



return 0;
}
