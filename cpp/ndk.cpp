#include <iostream>
using namespace std;

void ndk() {
  system("mkdir ndk && mkdir ndk/cpp && touch ndk/Makefile && touch ndk/cpp/main.cpp");
  system("echo '#include <iostream>\nusing namespace std;\n\nint main() {\n  cout << \"hello world\" << endl;\n}' > ndk/cpp/main.cpp");
  system("echo 'all:build\n\nbuild:\n	g++ -s -Wall -static -Os cpp/*.cpp -o test' > ndk/Makefile");
}
