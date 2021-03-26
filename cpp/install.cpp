#include <iostream>
using namespace std;

void install() {
  system("apt update && apt upgrade && apt install -y file make clang tsu ndk-multilib git figlet bash-completion");
}
