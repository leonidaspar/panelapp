class oikonomiko{
public:
    double math,aoth,aeep,ekthesi;
    oikonomiko(){
        math=0;
        aoth=0;
        aeep=0;
        ekthesi=0;
    }
    oikonomiko(double math,double aoth,double aeep,double ekthesi){
        this->math=math;
        this->aoth=aoth;
        this->aeep=aeep;
        this->ekthesi=ekthesi;
    }
    // Setters
    void setMath(double math){this->math=math;}
    void setAoth(double aoth){this->aoth=aoth;}
    void setAeep(double aeep){this->aeep=aeep;}
    void setEkthesi(double ekthesi){this->ekthesi=ekthesi;}
    // Getters
    double getMath(){return math;}
    double getAoth(){return aoth;}
    double getAeep(){return aeep;}
    double getEkthesi(){return ekthesi;}
    //
    double getAvg(){
        return ((math+aoth+aeep+ekthesi)/4)*1000;
    }

};
