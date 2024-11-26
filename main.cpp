#include "Latches.cpp"
#include <iostream>

int main(){
  DLatch Latch1;
  bool d = true;
  bool s = false;
  bool quit = false;
  std::cout << "Before input Q :" << Latch1.getQ() << std::endl;

  while(!quit){
    std::cout << "Data (0/1) :";
    std::cin >> d;
    std::cout << "Store (0/1) :";
    std::cin >> s;
    Latch1.updateLatch(d, s);
    std::cout << "Output :" << Latch1.getQ() << std::endl;
    std::cout << "Wanna quit (0/1) :";
    std::cin >> quit;
  }
}


