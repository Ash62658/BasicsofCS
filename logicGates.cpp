class LogicGates{
  public:

    bool notGate(bool a){
      if(a)
        return false;
      else
        return true;
    }

    bool orGate(bool a, bool b){
      if (a)
        return true;
      else if (b)
        return true;
      else
        return false;
    }
    bool andGate(bool a, bool b){
      if (a) {
        if (b)
          return true;
        return false;
      }
      else
        return false;
    }
    bool xorGate(bool a, bool b){
      if(a){
        if(b)
          return false;
        else
         return true;
      }
      else{
        if(b)
          return true;
        else
         return false;
      }
    }
    bool norGate(bool a, bool b){
      return notGate(orGate(a, b));
    }
    bool nandGate(bool a, bool b){
      return notGate(andGate(a, b));
    }
    bool xnorGate(bool a, bool b){
      return notGate(xorGate(a, b));
    }
};
