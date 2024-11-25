#include "Latches.cpp"
#include <iostream>

int main(){
  SRLatch Latch1;
  bool s = true;
  bool r = false;
  bool quit = false;
  std::cout << "Before input Q :" << Latch1.getQ() << std::endl;

  while(!quit){
    std::cout << "Set (0/1) :";
    std::cin >> s;
    std::cout << "Reset (0/1) :";
    std::cin >> r;
    Latch1.updateLatch(s, r);
    std::cout << "Output :" << Latch1.getQ() << std::endl;
    std::cout << "Inverted Output :" << Latch1.getnotQ() << std::endl;
    std::cout << "Wanna quit (0/1) :";
    std::cin >> quit;
  }
}


