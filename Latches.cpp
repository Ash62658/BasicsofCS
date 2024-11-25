#include <iostream>
#include "logicGates.cpp"

class SRLatch{
  private:
    bool Q;
    bool notQ;
    LogicGates Gate1;
  public:
    SRLatch(){
      Q = false;
      notQ = false;
    }
    void updateLatch(bool S, bool R){
      if(Gate1.andGate(S, R)){
        std::cout << "Invalid input both S and R cant be True at the same time." << std::endl;
      }
      Q = Gate1.norGate(R, notQ);
      notQ = Gate1.norGate(S, Q);
    }
    bool getQ(){
      return Q;
    }
    bool getnotQ(){
      return notQ;
    }
};
