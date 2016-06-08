 #include <stdio.h>
#include <conio.h>
#include <iostream.h>
  double n, cu, t,b,h, c,rl,ci,re,x,dd;
//DECLARACION DE VARIABLES
  double ac,at,adc,ar,ab,rad,D,op;
 int main ()
 //SE CREA UN PEQUEÑO MENU DE OPCIONES
  {
  cout<<"\n presione 1 si quiere el area del cuadrado";cout<<"\n";
  cout<<"\n presione 2 si quiere el area del triangulo";"\n";

  cout<<"\n presione 3 si quiere el area del circulo";"\n";
  cout<<"\n presione 4 si quiere el area del rectangulo";"\n";
  cout<<"\n ingrese su opcion";cout<<"\n";cin>>n;

// SE PIDEN LOS DATOS DEL CUADRADO Y SE CALCULA SU AREA (lado al cuadrado) en caso de c++ se usa lado * lado
   if (n==1)
   {
         cout<<"\n Inserte el lado del cuadrado: ";
     cin>>(cu);
    ac=cu*cu;
        cout<<"\n el area del cuadrado: "<<ac;
        cin>>x;
       }


 if (n==2)
 {

//SE PIDEN LOS DATOS DEL TRIANGULO Y SE HACER EL CALCULO at=b*a/2
     cout<<"Inserte el altura del triangulo: ";
     cin>>(h);
         cout<<"Inserte la base del triangulo: ";
     cin>>(b);

     at=b*h/2;
     cout<<"\n la altura del triangulo es "<<at;;
      cout<<"\n";
 cin>>x;
       }


        if (n==3){

//SE PIDEN LOS DATOS DE EL CIRCULO
        cout<<"Introduzca el Radio del Circulo";cin>>rad;
 ab=rad*2*3.14;

 cout<<"El area de un circulo es: ";
 cout<<ab;
 cout<<"\n";
 cin>>x;


           }
            if (n==4)
            {
//se piden los datos del rombo (AREA)
      cout<<"Introduzca el Diagonal del Rombo";cin>>D;
  cout<<"Introduzca el diagonal del Rombo";cin>>dd;
 ar=D*dd/2;

    cout<<"El area de un rombo es: ";
 cout<<ar;
 cout<<"\n";
 cin>>x;


// SI SE ELIGE UNA OPCION QUE NO ES VALIDA SALTARA UN MENSAJE DE "ERROR"
         }
      else
         cout<<"Error";
        getch();
    }
