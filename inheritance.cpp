#include <iostream>
#include <string>
class A{
    public:
        std::string a;

    void put(std::string par) { 
        a = par;
         }
	void get(std::string par) { 
        std::cout << par << " am a A class" <<std::endl;
    }
};
class subA : public A{
} objecto ;

class B{
    protected:
        std::string b;
    public:
    void put(std::string par) { 
        this -> b = par;
    }
 void output(std::string par) { 
        std::cout << par << " am a B class" <<std::endl;
    }          
};

class subB : public B{
}*object1 = new subB;

class C{
    private:
    std::string c;
    
    public:
    void AccessClassC(std::string par){
        c = par;
    }
  void output(std::string par){
        std::cout << par << " am a C class"<< std::endl;
    }
};

class subC : public C{
}object2;;

int main(){

objecto.get("I");
object1->output("I");
object2.output("I");

    return 0;
}
