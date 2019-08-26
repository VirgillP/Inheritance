//Sample program
#include <iostream>
#include <string>
class A{
    public:
        std::string a;

    	void put_val_a(std::string par) { 
        	a = par;
         }
	std::string get_val_a(void) { 
        	return a;
    	}
	void output_val_a(void){
	std::cout << a << " am a A class and have been called by the sub class." <<std::endl;
	}
};

class subA : public A{
}object0;


class B{
    protected:
        std::string b;
    public:
    void put_val_b(std::string par) { 
        this -> b = par;
    }
 void output_val_b(void) { 
        std::cout << b << " am a B class and have been called by the sub class." <<std::endl;
    }          
};

class subB : public B{
}*object1 = new subB;

class C{
    private:
    std::string c;
    
    public:
    void put_val_c(std::string par){
        c = par;
    }
    std::string get_val_c(void){
    	return c;
    }	

  void output_val_c(void){
        std::cout << c << " am a C class and have been called by the sub class."<< std::endl;
    }
};

class subC : public C{
}object2;


int main(){

object0.put_val_a("I");
object0.output_val_a();
	
object1->put_val_b("I");
object1->output_val_b();
	
object2.put_val_c("I");
object2.output_val_c();


    return 0;
}
