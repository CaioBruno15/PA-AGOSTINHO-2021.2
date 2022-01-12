#include <iostream>
using namespace std;
#include "Sculptor.h"
#include <iostream>
#include <fstream>
#include <iomanip> 
#include <string>
#include <math.h>

 int main () {

   Sculptor creeper(50,50,50);

    //explosão
    creeper.setColor(255,204,19,1);
    creeper.putSphere(35,30,4,4);
    creeper.putSphere(8,23,4,4);
    creeper.putSphere(14,10,4,4);

    creeper.setColor(131,123,132,1);
    creeper.putEllipsoid (20,30,4,8,3,7);
    creeper.putEllipsoid (35,10,4,4,6,2);

    


    creeper.setColor(0,0,0,1);//cor do pé
    creeper.putBox (20,28,0,3,0,8);//pé


    creeper.setColor(37,192,29,1);//cor das perans
    creeper.putBox (20,28,1,6,0,8);//pernas
    creeper.cutBox (23,25,0,6,0,8);

    creeper.setColor(37,192,29,1);//cor do corpo
    creeper.putBox (21,27,4,16,2,6);//corpo

    creeper.setColor(15,89,2,1);//detalhes
    creeper.putVoxel (23,4,5);
    creeper.putVoxel (25,8,5);
    creeper.putVoxel (22,7,5);
    creeper.putVoxel (26,12,5);
    creeper.putVoxel (25,13,5);
    creeper.putVoxel (23,4,3);
    creeper.putVoxel (25,8,3);
    creeper.putVoxel (22,7,3);
    creeper.putVoxel (26,12,3);
    creeper.putVoxel (25,13,3);
    creeper.putVoxel (23,4,2);
    creeper.putVoxel (25,8,2);
    creeper.putVoxel (22,7,2);
    creeper.putVoxel (26,12,2);
    creeper.putVoxel (25,13,2);

    creeper.setColor(255,255,255,1);//detalhes
    creeper.putVoxel (24,6,5);
    creeper.putVoxel (22,12,5);
    creeper.putVoxel (24,11,5);
    creeper.putVoxel (23,9,5);

    creeper.putVoxel (24,6,2);
    creeper.putVoxel (22,12,2);
    creeper.putVoxel (24,11,2);
    creeper.putVoxel (23,9,2);

    creeper.setColor(131,123,132,1);//detalhes
    creeper.putVoxel (22,10,5);
    creeper.putVoxel (22,8,5);
    creeper.putVoxel (24,8,5);
    creeper.putVoxel (25,10,5);
    creeper.putVoxel (21,13,5);
    creeper.putVoxel (24,5,5);

    creeper.putVoxel (22,10,2);
    creeper.putVoxel (22,8,2);
    creeper.putVoxel (24,8,2);
    creeper.putVoxel (25,10,2);
    creeper.putVoxel (21,13,2);
    creeper.putVoxel (24,5,2);





    creeper.setColor(37,192,29,1);//cor da cabeça
    creeper.putBox (20,28,14,23,0,8);//cabeça

    creeper.setColor(0,0,0,1);//rosto

    creeper.putVoxel(21,21,7);
    creeper.putVoxel(21,20,7);
    creeper.putVoxel(22,21,7);
    creeper.putVoxel(22,20,7);

    creeper.putVoxel(23,19,7);
    creeper.putVoxel(23,18,7);
    creeper.putVoxel(23,17,7);
    creeper.putVoxel(24,19,7);
    creeper.putVoxel(24,18,7);
    creeper.putVoxel(24,17,7);

    creeper.putVoxel(25,21,7);
    creeper.putVoxel(26,21,7);
    creeper.putVoxel(25,20,7);
    creeper.putVoxel(26,20,7);

    creeper.putVoxel(21,17,7);
    creeper.putVoxel(21,16,7);
    creeper.putVoxel(21,15,7);
    creeper.putVoxel(22,17,7);
    creeper.putVoxel(22,16,7);
    creeper.putVoxel(22,15,7);

    creeper.putVoxel(25,17,7);
    creeper.putVoxel(25,16,7);
    creeper.putVoxel(25,15,7);
    creeper.putVoxel(26,17,7);
    creeper.putVoxel(26,16,7);
    creeper.putVoxel(26,15,7);

  

    
    
    

   
    creeper.writeOFF((char*) "creeper.off");
   
 }

 

