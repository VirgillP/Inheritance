#include <iostream>
#include <string>
class A{
    public:
        std::string a;

    	void put(std::string par) { 
        	a = par;
         }
	std::string get(void) { 
        	return a;
    	}
	void output(void){
	std::cout << a << " am a A class" <<std::endl;
	}
};
class subA : public A{
} object0 ;


class B{
    protected:
        std::string b;
    public:
    void put(std::string par) { 
        this -> b = par;
    }
 void output(void) { 
        std::cout << b << " am a B class" <<std::endl;
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
    std::string GetClassC(void){
    	return c;
    }	

  void outputClassC(void){
        std::cout << c << " am a C class"<< std::endl;
    }
};

class subC : public C{
}object2;;

int main(){

object0.put("I");
object0.output();
object1->put("I");
object1->output();
object2.AccessClassC("I");
object2.outputClassC();


    return 0;
}
