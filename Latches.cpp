#include <iostream>
#include "logicGates.cpp"

LogicGates Gate1;

class SRLatch{
  private:
    bool Q;
    bool notQ;
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

class DLatch{
  private:
    bool Q;
  public:
    SRLatch Latch;
    DLatch(){
      Q = false;
    }
    void updateLatch(bool D, bool S){
      Latch.updateLatch(Gate1.andGate(D, S), Gate1.andGate(Gate1.notGate(D), S));
      Q = Latch.getQ();
    }

    bool getQ(){
      return Q;
    }

};
