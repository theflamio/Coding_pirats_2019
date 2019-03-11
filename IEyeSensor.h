#pragma once

class IEyeSensor
{
  public:
    IEyeSensor(){};
    ~IEyeSensor(){};
    virtual float afstand() = 0;

  private:

};

