class theoritiki{
public:
    double istoria,latinika,arxaia,ekthesi;

    theoritiki(){
        istoria=0;
        latinika=0;
        arxaia=0;
        ekthesi=0;
    }
    theoritiki(double istoria,double latinika,double arxaia,double ekthesi){
        this->istoria=istoria;
        this->latinika=latinika;
        this->arxaia=arxaia;
        this->ekthesi=ekthesi;
    }
    // Setters
    void setIstoria(double istoria) { this->istoria=istoria;}
    void setLatinika(double latinika) { this->latinika=latinika;}
    void setArxaia(double arxaia) { this->arxaia=arxaia;}
    void setEkthesi(double ekthesi) { this->ekthesi=ekthesi;}
    // Getters
    double getIstoria() {return istoria;}
    double getLatinika() {return latinika;}
    double getArxaia() {return arxaia;}
    double getEkthesi() {return ekthesi;}
    //
    double getAvg(){
        return ((istoria+latinika+arxaia+ekthesi)/4)*1000;
    }
    //
    double cat1(){
        return(0.30*ekthesi+0.25*arxaia+0.20*istoria+0.2*latinika)*1000;
    }
    double cat2(){
        return(0.40*ekthesi+0.2*arxaia+0.2*istoria+0.2*latinika)*1000;
    }
    double cat3(){
        return(0.34*ekthesi+0.22*arxaia+0.22*istoria+0.22*latinika)*1000;
    }
    double cat4(){
        return(0.3*ekthesi+0.2*arxaia+0.3*istoria+0.2*latinika)*1000;
    }
    double cat5(){
        return(0.3*ekthesi+0.3*arxaia+0.2*istoria+0.2*latinika)*1000;
    }
    double cat6(){
        return(0.2*ekthesi+0.3*arxaia+0.3*istoria+0.2*latinika)*1000;
    }
    double cat7(){
        return(0.3*ekthesi+0.25*arxaia+0.25*istoria+0.2*latinika)*1000;
    }




};
