class ygeias{
public:
    double biology,chem,physics,ekthesi;
    ygeias(){
        biology=0;
        chem=0;
        physics=0;
        ekthesi=0;
    }
    ygeias(double biology,double chem,double physics,double ekthesi){
        this->biology=biology;
        this->chem=chem;
        this->physics=physics;
        this->ekthesi=ekthesi;
    }
    // Setters
    void setBiology(double biology) { this->biology = biology; }
    void setChem(double chem) { this->chem = chem; }
    void setPhysics(double physics) { this->physics = physics; }
    void setEkthesi(double ekthesi) { this->ekthesi = ekthesi; }
    // Getters
    double getBiology() { return biology; }
    double getChem() { return chem; }
    double getPhysics() { return physics; }
    double getEkthesi() { return ekthesi; }
    //
    double getAvg(){
        return ((biology+chem+physics+ekthesi)/4)*1000;
    }
};
