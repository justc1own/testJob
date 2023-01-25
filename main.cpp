#include <vector>
#include <ctime>
#include <typeinfo>
#include <algorithm>
#include <memory>
#include "classDecloration.hpp"

const int MX_RND = 30000;

double randomRadius() {
    double r = (double)(rand() % MX_RND + 1)/ (double)(rand() % MX_RND + 1) + 1.;
    return r;
}

int main() {
    srand(time(NULL));
    int obj_amount = rand() % 10 + 10;

    //std::cout << "HERE1" << std::endl;

    std::vector<Curve*> v;
    for(int i = 0; i < obj_amount; i++) {
        int obj_type = rand()%3;

        if(obj_type == 0) { //mean obj type is circle
            double r = randomRadius();
            v.push_back(new Circle(r));
            //Curve* obj = new Circle(r);
            //v.push_back(*obj);
        } else if(obj_type == 1) { //mean obj type is ellipse
            double r1 = randomRadius(); double r2 =randomRadius();
            v.push_back(new Ellipse(r1, r2));
            //Curve* obj = new Ellipse(r1, r2);
            //v.push_back(*obj);
        } else { //mean obj type is helix
            double r = randomRadius();
            v.push_back(new Helix(r));
            //Curve* obj = new Helix(r);
            //v.push_back(*obj);
        }
    }
    
    
    //std::cout << typeid(Curve*).name() << "  " << typeid(Circle*).name() << "  " << typeid(Ellipse*).name() << std::endl;
    
    std::vector<Curve*> v2;
    std::cout << "PRINT COORD AT t=PI/4" << std::endl;
    for(auto i: v) {
        double x = 2.33;
        
        if(i->objType == 0) {
            //std::shared_ptr<Circle*> pntr = i;//&(dynamic_cast<Circle>i);
            //v2.push_back(pntr);
            //std::cout << "is Circle" << std::endl; 
            v2.push_back(i);
        }
        
        double t = PI/4.;
        Point* p = i->getPoint(t);
        Point* d = i->deriv(t);
        i->printCurveType();

        p->printPoint();
        std::cout << std::endl;
        i->printDeriv(d);
        std::cout << std::endl;
    }

    auto comp = [](Curve* a, Curve* b) {
        return a->getRadius() < b->getRadius();
    };
    std::sort(v2.begin(), v2.end(), comp);
    
    double totalRadius = 0.0;
    std::cout << "Circle's radiuses: ";
    for(auto i: v2) {
        double tmpRadius = i->getRadius();
        totalRadius += tmpRadius;
        std::cout <<  tmpRadius << " ";
    }

    std::cout << std::endl << "Total radius = " << totalRadius << std::endl;
}