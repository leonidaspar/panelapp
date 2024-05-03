class thetiki{
public:
    double math,chem,physics,ekthesi;
    thetiki(){
        math=0;
        chem=0;
        physics=0;
        ekthesi=0;
    }
    thetiki(double math,double chem,double physics,double ekthesi){
        this->math=math;
        this->chem=chem;
        this->physics=physics;
        this->ekthesi=ekthesi;
    }
    // Setters
    void setMath(double math) {this->math = math;}
    void setChem(double chem) {this->chem = chem;}
    void setPhysics(double physics) {this->physics = physics;}
    void setEkthesi(double ekthesi) {this->ekthesi = ekthesi;}
    // Getters
    double getMath() {return math;}
    double getChem() {return chem;}
    double getPhysics() {return physics;}
    double getEkthesi() {return ekthesi;}
    //
    double getAvg(){
        return ((math+chem+physics+ekthesi)/4)*1000;
    }
    //



};
