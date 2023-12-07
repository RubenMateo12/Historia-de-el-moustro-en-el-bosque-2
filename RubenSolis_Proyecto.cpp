#include <iostream>

using namespace std;

int main(){
    int opcion;
    
    cout << "\n\nMoustro en el boque\n\n" << endl;
    cout << "Empiezas en tu trabajo como guardabosque" << endl;
    cout << "Te dicen que tienes una torre de control y te dan todo el equipo necesario para que empiezes a laburar" << endl;
    cout << "Estas entusiasmado por empezar, te dan ciertas indicaciones que tienes que realizar durante la noche" << endl;
    cout << "La primera indicacion es que tienes que bajar a las 10pm de tu torre y ver que ya no halla gente fuera" << endl;
    cout << "Tu segunda indicacion es estar al pendiente desde tu torre por si alguien esta en peligro, ocupan ayuda, etc" << endl;
    cout << "Y tu ultima indicacion es que todo lo raro que veas tienes que avisar a tus compaÃ±eros guardabosques en los radios\n" << endl;
    cout << "Ya es de noche y comienza tu guardia, decides bajar a comprobar que toda la gente ya desalojo el bosque" << endl;
    cout << "al momento de estar revisando si ya no falta nadie por desalojar alcanzas a ver de reojo algo que se movimo en unos arbustos" << endl;
    cout << "Te vas acercando y vez una forma humanoide rara y desides empezarla a perseguir" << endl;
    
    do{
          int a,b;
          cout << "\nElije una opcion del 1 al 5:\n" << endl;
          cout << "\n100%  Vida          100% de enegia\n" << endl;
          cout << "1-Decides comunicar a tus companeros para que encuentren a esta cosa"<< endl; 
          cout << "2-Decides perseguirlo solo e informar a tus compañeros"<< endl;
          cout << "3-Decides gritarle que se detenga"<< endl;
          cout << "4-Decides seguir persiguiendolo"<< endl;
          cout << "5-Salir"<< endl;
          cin >> opcion;
        
          //0
          switch(opcion)
          {
          case 1: 
          cout<< "\nTus companeros llegan rapidamente con armas y cosas de protreccion ya que estaban cerca de alli, logran ver donde se mete el moustro\n"<< endl;
          int a,b;
        
          cout << "\nElije una opcion del 1 al 4:\n" << endl;
          cout << "\n100%  Vida          100% de enegia\n" << endl;
          cout << "1-Entran todos juntos"<< endl; 
          cout << "2-Entran de a 2"<< endl;
          cout << "3-Entran separados"<< endl;
          cout << "4-salir";
          cin >> opcion;
                      //1
                      switch(opcion){
                      case 1:
                      cout<< "\nLogran ver que hay cuerpos tirados por todos lados descuartisados, uno de ustedes se da cuenta que los va a atakar esta cosa tus companeros"<< endl;
                      cout<< "\n"<< endl;
                      int a,b;
                                            
                      cout << "\nElije una opcion del 1 al 4:\n" << endl;
                      cout << "\n100%  Vida          20% de enegia\n" << endl;
                      cout << "1-Apoyarlos con armas"<< endl; 
                      cout << "2-Lanzartele a golpes"<< endl;
                      cout << "3-Correr"<< endl;
                      cout << "4-salir";
                      cin >> opcion;
                                  //2
                                  switch(opcion){
                                  case 1:
                                  cout<< "\nLe logras dar una bala pero va directamente a atakarte y de da un golpe\n"<< endl;
                                  int a,b;
                                            
                                  cout << "\nElije una opcion del 1 al 4:\n" << endl;
                                  cout << "\n60%  Vida          50% de enegia\n" << endl;
                                  cout << "1-Decides seguir disparando"<< endl; 
                                  cout << "2-Te detienes y te acercas a el para verificar que esta muerto"<< endl;
                                  cout << "3-Acercarte para matarlo"<< endl;
                                  cout << "4-salir";
                                  cin >> opcion;
                                              //3
                                              switch(opcion){
                                              case 1:
                                              cout<< "\nLe haces mucho dano y tus companeros te ayudan a dejarlo inmovilisado\n"<< endl;
                                              int a,b;
                                            
                                              cout << "\nElije una opcion del 1 al 4:\n" << endl;
                                              cout << "\n50%  Vida          55% de enegia\n" << endl;
                                              cout << "1-Lo matas con una bala en la cabeza"<< endl; 
                                              cout << "2-Deciden tratar de amarrarlo"<< endl;
                                              cout << "3-Hablan a la policia mientras lo amarran"<< endl;
                                              cout << "4-salir";
                                              cin >> opcion;
                                                          //4
                                                          switch(opcion){
                                                          case 1:
                                                          cout<< "\nTus companeros te reclaman por que lo querian entregar vivo pero sabes que hiciste lo correcto\n"<< endl;
                                                          int a,b;
                                            
                                                          cout << "\nElije una opcion del 1 al 4:\n" << endl;
                                                          cout << "\n50%  Vida          80% de enegia\n" << endl;
                                                          cout << "1-Entranntregar el cuerpo sin vida a la policia"<< endl; 
                                                          cout << "2-Ocultar el cuerpo"<< endl;
                                                          cout << "3-Entregar el cuerpo"<< endl;
                                                          cout << "4-salir";
                                                          cin >> opcion;
                                                                      //5
                                                                      switch(opcion){
                                                                      case 1:
                                                                      cout<< "\nLos policias te dicen que por que lo mateste si la lo tenian controlado\n"<< endl;
                                                                      int a,b;
                                            
                                                                      cout << "\nElije una opcion del 1 al 4:\n" << endl;
                                                                      cout << "\n70%  Vida          90% de enegia\n" << endl;
                                                                      cout << "1-Les dices que tenias un presentimiento de que si lo dejabas vivo iba a acabar con ustedes"<< endl; 
                                                                      cout << "2-Dices que sentiste que era lo correcto"<< endl;
                                                                      cout << "3-Lo histe por aver matado a tanta gente"<< endl;
                                                                      cout << "4-salir";
                                                                      cin >> opcion;
                                                                                  //6
                                                                                  switch(opcion){
                                                                                  case 1:
                                                                                  cout<< "\nApesar de estos inconvenientes la policia y los guardabosques te premian por un gran esfuerzo y desempeño en tu trabajo\n"<< endl;
                                                                                  break;
                                                                                  //6                       
                                                                                  case 2:
                                                                                  cout<< "\nApesar de estos inconvenientes la policia y los guardabosques te premian por un gran esfuerzo y desempeño en tu trabajo\n"<< endl;
                                                                                  break;
                                                                                  //6                         
                                                                                  case 3:
                                                                                  cout<< "\nApesar de estos inconvenientes la policia y los guardabosques te premian por un gran esfuerzo y desempeño en tu trabajo\n"<< endl;
                                                                                  break;
                                                                                  //6                         
                                                                                  case 4:
                                                                                  cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                                                                  cout<< "\n SI  Presiona 1";
                                                                                  cout<< "\n NO  Presiona 2\n\n";
                                                                                  cin >> opcion;
                                                                                  cout<< "\n\n";
                                                                                  if (opcion == 1)
                                                                                  {
                                                                                  return 0;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                  return main();
                                                                                  }
                                                                                  break;
                                                                                  default:
                                                                                  cout<<"\nElige una opcion valida\n\n"<< endl;
                                                                                  return main();
                                                                                  break;
                                                                                  }
                                                                                  break;
                                                                      //5                       
                                                                      case 2:
                                                                      cout<< "\nAl ocultar el cuerpo, la policia te detiene junto a tus compañeros por ocultar informacion\n"<< endl;
                                                                      break;
                                                                      //5                         
                                                                      case 3:
                                                                      cout<< "\nEntregan el cuerpo a la policia y se les e recompenzado por un buen trabajo\n"<< endl;
                                                                      break;
                                                                      //5                         
                                                                      case 4:
                                                                      cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                                                      cout<< "\n SI  Presiona 1";
                                                                      cout<< "\n NO  Presiona 2\n\n";
                                                                      cin >> opcion;
                                                                      cout<< "\n\n";
                                                                      if (opcion == 1)
                                                                      {
                                                                      return 0;
                                                                      }
                                                                      else
                                                                      {
                                                                      return main();
                                                                      }
                                                                      break;
                                                                      default:
                                                                      cout<<"\nElige una opcion valida\n\n"<< endl;
                                                                      return main();
                                                                      break;
                                                                      }
                                                                      break;
                                                          //4                       
                                                          case 2:
                                                          cout<< "\nSe desamarra y mata a todos\n"<< endl;
                                                          break;
                                                          //4                       
                                                          case 3:
                                                          cout<< "\nLos hagarra distraidos y mata a todos\n"<< endl;
                                                          break;
                                                          //4                       
                                                          case 4:
                                                          cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                                          cout<< "\n SI  Presiona 1";
                                                          cout<< "\n NO  Presiona 2\n\n";
                                                          cin >> opcion;
                                                          cout<< "\n\n";
                                                          if (opcion == 1)
                                                          {
                                                          return 0;
                                                          }
                                                          else
                                                          {
                                                          return main();
                                                          }
                                                          break;
                                                          default:
                                                          cout<<"\nElige una opcion valida\n\n"<< endl;
                                                          return main();
                                                          break;
                                                          }
                                                          break;
                                              //3                       
                                              case 2:
                                              cout<< "\nLos hagarra distraidos y mata a todos\n"<< endl;
                                              break;
                                              //3                       
                                              case 3:
                                              cout<< "\nLos hagarra distraidos y mata a todos\n"<< endl;
                                              break;
                                              //3                         
                                              case 4:
                                              cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                              cout<< "\n SI  Presiona 1";
                                              cout<< "\n NO  Presiona 2\n\n";
                                              cin >> opcion;
                                              cout<< "\n\n";
                                              if (opcion == 1)
                                              {
                                              return 0;
                                              }
                                              else
                                              {
                                              return main();
                                              }
                                              break;
                                              default:
                                              cout<<"\nElige una opcion valida\n\n"<< endl;
                                              return main();
                                              break;
                                              }
                                              break;
                                  //2                                   
                                  case 2:
                                  cout<< "\nTe acercas y te hagarra y te mata\n"<< endl;
                                  break;
                                  //2                                  
                                  case 3:
                                  cout<< "\nTe acercas y te hagarra y te mata\n"<< endl;
                                  break;
                                  //2                                     
                                  case 4:
                                  cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                  cout<< "\n SI  Presiona 1";
                                  cout<< "\n NO  Presiona 2\n\n";
                                  cin >> opcion;
                                  cout<< "\n\n";
                                  if (opcion == 1)
                                  {
                                  return 0;
                                  }
                                  else
                                  {
                                  return main();
                                  }
                                  break;
                                  default:
                                  cout<<"\nElige una opcion valida\n\n"<< endl;
                                  return main();
                                  break;
                                  }  
                                  break;
                      //1   
                      case 2:
                      cout<< "\nEl moustro se percata de su presencia y va por ustedes\n"<< endl;
          
                      cout << "\nElije una opcion del 1 al 4:\n" << endl;
                      cout << "\n100%  Vida          50% de enegia\n" << endl;
                      cout << "1-Irse corriendo"<< endl; 
                      cout << "2-Hacerse los muertos"<< endl;
                      cout << "3-Pelear con el"<< endl;
                      cout << "4-salir";
                      cin >> opcion;
                                  switch(opcion){
                                  case 1: 
                                  cout<< "\nEl moutro los alcanza rapidamente y los mata\n"<< endl;
                                  break;
                                     
                                  case 2:
                                  cout<< "\nEl moustro detecta que tienen signos vitales y los mata\n"<< endl;
                                  break;
                                     
                                  case 3:
                                  cout<< "\nEs demasiado fuerte y los mata\n"<< endl;
                                  break;
                                     
                                  case 4:
                                  cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                  cout<< "\n SI  Presiona 1";
                                  cout<< "\n NO  Presiona 2\n\n";
                                  cin >> opcion;
                                  cout<< "\n\n";
                                  if (opcion == 1)
                                  {
                                  return 0;
                                  }
                                  else
                                  {
                                  return main();
                                  }
                                  break;
                                  default:
                                  cout<<"\nElige una opcion valida\n\n"<< endl;
                                  return main();
                                  break;
                            
                                  } 
                                  break;
                      //1    
                      case 3:
                      cout<< "\nEntran de a uno y asi como van entrando los va matando sin piedad\n"<< endl;
                      break;
                      //1   
                      case 4:
                      cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                      cout<< "\n SI  Presiona 1";
                      cout<< "\n NO  Presiona 2\n\n";
                      cin >> opcion;
                      cout<< "\n\n";
                      if (opcion == 1)
                      {
                      return 0;
                      }
                      else
                      {
                      return main();
                      }
                      break;
                      default:
                      cout<<"\nElige una opcion valida\n\n"<< endl;
                      return main();
                      break;
                      }  
                      break;
             
          //0   
          case 2:
          cout<< "\nLo persigues durante un buen rato pero es muy rapido y lo pierdes de vista\n"<< endl;
          
          cout << "\nElije una opcion del 1 al 4:\n" << endl;
          cout << "\n100%  Vida          20% de enegia\n" << endl;
          cout << "1-Seguir buscando"<< endl; 
          cout << "2-Adentrarte en el bosque"<< endl;
          cout << "3-Decides esperar a que lleguen los reuerzos"<< endl;
          cout << "4-salir";
          cin >> opcion;
                      //1
                      switch(opcion){
                      case 1: 
                      cout<< "\nAl seguir buscando vez como entra a una cueva\n"<< endl;
                      int a,b;
                                            
                      cout << "\nElije una opcion del 1 al 4:\n" << endl;
                      cout << "\n100%  Vida          100% de enegia\n" << endl;
                      cout << "1-Decides entrar tu solo"<< endl; 
                      cout << "2-Comunicas a tus companeros"<< endl;
                      cout << "3-Comunicas a tus companeros mientras los persigues"<< endl;
                      cout << "4-salir";
                      cin >> opcion;
                                  //2
                                  switch(opcion){
                                  case 1: 
                                  cout<< "\nCuando entras vez cuerpos sin vida y descuartisados\n"<< endl;
                                  int a,b;
                                            
                                  cout << "\nElije una opcion del 1 al 4:\n" << endl;
                                  cout << "\n100%  Vida          50% de enegia\n" << endl;
                                  cout << "1-Seguir buscando"<< endl; 
                                  cout << "2-Irte de alli con cuidado"<< endl;
                                  cout << "3-Comunicas a tus companeros mientras observas como se come a las personas"<< endl;
                                  cout << "4-salir";
                                  cin >> opcion;
                                               //3
                                              switch(opcion){
                                              case 1: 
                                              cout<< "\nLa curiosidad te gana y sigues buscando y vez a esa cosa comiendose cuerpos humanos\n"<< endl;
                                              int a,b;
                                            
                                              cout << "\nElije una opcion del 1 al 4:\n" << endl;
                                              cout << "\n100%  Vida          70% de enegia\n" << endl;
                                              cout << "1-Te decides ir a buscar a tus compañeros y decirles que traigan apoyo"<< endl; 
                                              cout << "2-Te quedas alli esperando"<< endl;
                                              cout << "3-Te vaz"<< endl;
                                              cout << "4-salir";
                                              cin >> opcion;
                                                          //4
                                                          switch(opcion){
                                                          case 1: 
                                                          cout<< "\nYa cuando llego el apoyo entran todos a capturar a este moustro, pero este se resite\n"<< endl;
                                                          int a,b;
                                            
                                                          cout << "\nElije una opcion del 1 al 4:\n" << endl;
                                                          cout << "\n100%  Vida          70% de enegia\n" << endl;
                                                          cout << "1-Le disparas varias veces"<< endl; 
                                                          cout << "2-Le das de golpes"<< endl;
                                                          cout << "3-Corres"<< endl;
                                                          cout << "4-salir";
                                                          cin >> opcion;
                                                                      //5
                                                                      switch(opcion){
                                                                      case 1: 
                                                                      cout<< "\nEl moustro queda inmovilisado en el sulo\n"<< endl;
                                                                      int a,b;
                                            
                                                                      cout << "\nElije una opcion del 1 al 4:\n" << endl;
                                                                      cout << "\n100%  Vida          90% de enegia\n" << endl;
                                                                      cout << "1-Lo matas de un tiro en la cabeza"<< endl; 
                                                                      cout << "2-Esperar a que llegue la policia"<< endl;
                                                                      cout << "3-Se lo deciden llevar para entregarlo"<< endl;
                                                                      cout << "4-salir";
                                                                      cin >> opcion;
                                                                                  //6
                                                                                  switch(opcion){
                                                                                  case 1:
                                                                                  cout<< "\nAl matarlo y entregarlo a la policia te felicitan por tu gran trabajo y terminas siendo el heroe de el bosque\n"<< endl;
                                                                                  break;
                                                                                  //6                       
                                                                                  case 2:
                                                                                  cout<< "\nEste se libera y mata a todos y se escapa de la policia\n"<< endl;
                                                                                  break;
                                                                                  //6                         
                                                                                  case 3:
                                                                                  cout<< "\nSe suelta y mata a todos\n"<< endl;
                                                                                  break;
                                                                                  //6                         
                                                                                  case 4:
                                                                                  cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                                                                  cout<< "\n SI  Presiona 1";
                                                                                  cout<< "\n NO  Presiona 2\n\n";
                                                                                  cin >> opcion;
                                                                                  cout<< "\n\n";
                                                                                  if (opcion == 1)
                                                                                  {
                                                                                  return 0;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                  return main();
                                                                                  }
                                                                                  break;
                                                                                  default:
                                                                                  cout<<"\nElige una opcion valida\n\n"<< endl;
                                                                                  return main();
                                                                                  break;
                                                                                  }
                                                                                  break;
                                                                      //5
                                                                      case 2:
                                                                      cout<< "\nTe mata ya que es mucho mas fuerte\n"<< endl;
                                                                      break;
                                                                      //5
                                                                      case 3:
                                                                      cout<< "\nTe alcanza y te mata\n"<< endl;
                                                                      break;
                                                                      //5
                                                                      case 4:
                                                                      cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                                                      cout<< "\n SI  Presiona 1";
                                                                      cout<< "\n NO  Presiona 2\n\n";
                                                                      cin >> opcion;
                                                                      cout<< "\n\n";
                                                                      if (opcion == 1)
                                                                      {
                                                                      return 0;
                                                                      }
                                                                      else
                                                                      {
                                                                      return main();
                                                                      }
                                                                      break;
                                                                      default:
                                                                      cout<<"\nElige una opcion valida\n\n"<< endl;
                                                                      return main();
                                                                      break;
                                                                      }
                                                                      break;
                                                          //4
                                                          case 2:
                                                          cout<< "\nTe encuentra escondido y te mata\n"<< endl;
                                                          break;
                                                          //4
                                                          case 3:
                                                          cout<< "\nTe ve y te alcanza y te mata\n"<< endl;
                                                          break;
                                                          //4
                                                          case 4:
                                                          cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                                          cout<< "\n SI  Presiona 1";
                                                          cout<< "\n NO  Presiona 2\n\n";
                                                          cin >> opcion;
                                                          cout<< "\n\n";
                                                          if (opcion == 1)
                                                          {
                                                          return 0;
                                                          }
                                                          else
                                                          {
                                                          return main();
                                                          }
                                                          break;
                                                          default:
                                                          cout<<"\nElige una opcion valida\n\n"<< endl;
                                                          return main();
                                                          break;
                                                          }
                                                          break;
                                              //3
                                              case 2:
                                              cout<< "\nMientras esperas el moustro te encuentra y te mata\n"<< endl;
                                              break;
                                              //3
                                              case 3:
                                              cout<< "\nTus compañeros hacen ruidos fuertes y este se da cuenta y acaba contigo\n"<< endl;
                                              break;
                                              //3
                                              case 4:
                                              cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                              cout<< "\n SI  Presiona 1";
                                              cout<< "\n NO  Presiona 2\n\n";
                                              cin >> opcion;
                                              cout<< "\n\n";
                                              if (opcion == 1)
                                              {
                                              return 0;
                                              }
                                              else
                                              {
                                              return main();
                                              }
                                              break;
                                              default:
                                              cout<<"\nElige una opcion valida\n\n"<< endl;
                                              return main();
                                              break;
                                              }
                                              break;
                                  //2
                                  case 2:
                                  cout<< "\nMiestras esperas el moustro te encuentra y te mata\n"<< endl;
                                  break;
                                  //2
                                  case 3:
                                  cout<< "\nDesides perseguirlo pero este se da cuenta que estas solo y te mata\n"<< endl;
                                  break;
                                  //2
                                  case 4:
                                  cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                                  cout<< "\n SI  Presiona 1";
                                  cout<< "\n NO  Presiona 2\n\n";
                                  cin >> opcion;
                                  cout<< "\n\n";
                                  if (opcion == 1)
                                  {
                                  return 0;
                                  }
                                  else
                                  {
                                  return main();
                                  }
                                  break;
                                  default:
                                  cout<<"\nElige una opcion valida\n\n"<< endl;
                                  return main();
                                  break;
                                  } 
                                  break;
                      //1   
                      case 2:
                      cout<< "\nTe adentras en el bosque pero el moustre te ve, te comienza a perseguir y te alcanza y te mata\n"<< endl;
                      break;
                      //1   
                      case 3:
                      cout<< "\nEstas esperando los refuerzos pero solo te encuentra el moustro y te mata\n"<< endl;
                      break;
                      //1
                      case 4:
                      cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                      cout<< "\n SI  Presiona 1";
                      cout<< "\n NO  Presiona 2\n\n";
                      cin >> opcion;
                      cout<< "\n\n";
                      if (opcion == 1)
                      {
                      return 0;
                      }
                      else
                      {
                      return main();
                      }
                      break;
                      default:
                      cout<<"\nElige una opcion valida\n\n"<< endl;
                      return main();
                      break;
                      } 
                      break;
          //0    
          case 3:
          cout<< "\nSe da la vuelta y te ve\n"<< endl;
          cout << "\nElije una opcion del 1 al 4:\n" << endl;
          cout << "\n100%  Vida          100% de enegia\n" << endl;
          cout << "1-Corres para escapar"<< endl; 
          cout << "2-Decides combatirlo"<< endl;
          cout << "3-Te escondes"<< endl;
          cout << "4-salir";
          cin >> opcion;
                      //1
                      switch(opcion){
                      case 1: 
                      cout<< "\nTe alcanza y te mata\n"<< endl;
                      break;
                      //1   
                      case 2:
                      cout<< "\nPor la fuerza que tiene te mata facilmente\n"<< endl;
                      break;
                      //1   
                      case 3:
                      cout<< "\nTe encuentra y te mata\n"<< endl;
                      break;
                      //1
                      case 4:
                      cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                      cout<< "\n SI  Presiona 1";
                      cout<< "\n NO  Presiona 2\n\n";
                      cin >> opcion;
                      cout<< "\n\n";
                      if (opcion == 1)
                      {
                      return 0;
                      }
                      else
                      {
                      return main();
                      }
                      break;
                      default:
                      cout<<"\nElige una opcion valida\n\n"<< endl;
                      return main();
                      break;
                      } 
                      break;
          //0      
          case 4:
          cout<< "\nLos vas persiguiendo pero se da cuenta que estas totalmente solo y se regresa por ti\n"<< endl;
          cout << "\nElije una opcion del 1 al 4:\n" << endl;
          cout << "\n100%  Vida          100% de enegia\n" << endl;
          cout << "1-Peleas con el"<< endl; 
          cout << "2-Corres para escapar de el"<< endl;
          cout << "3-Te escondes"<< endl;
          cout << "4-salir";
          cin >> opcion;
                      //1
                      switch(opcion){
                      case 1: 
                      cout<< "\nTe gana y te mata por que el tiene mas fuerza\n"<< endl;
                      break;
                      //1   
                      case 2:
                      cout<< "\nEste te alcanza y te mata\n"<< endl;
                      break;
                      //1   
                      case 3:
                      cout<< "\nEste te olfatea, te encuentra y te mata\n"<< endl;
                      break;
                      //1
                      case 4:
                      cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
                      cout<< "\n SI  Presiona 1";
                      cout<< "\n NO  Presiona 2\n\n";
                      cin >> opcion;
                      cout<< "\n\n";
                      if (opcion == 1)
                      {
                      return 0;
                      }
                      else
                      {
                      return main();
                      }
                      break;
                      default:
                      cout<<"\nElige una opcion valida\n\n"<< endl;
                      return main();
                      break;
                      } 
                      break;
          //0      
          case 5:
          cout<< "\nSeguro que quieres salir...?   SI  o  NO \n"<< endl;
          cout<< "\n SI  Presiona 1";
          cout<< "\n NO  Presiona 2\n\n";
          cin >> opcion;
          cout<< "\n\n";
          if (opcion == 1)
          {
          return 0;
          }
          else
          {
          return main();
          }
          break;
          default:
          cout<<"\nElige una opcion valida\n\n"<< endl;
          return main();
          break;
    
          } 
          }while(opcion !=1 && opcion !=2 && opcion !=3 && opcion !=4 && opcion !=5);
          system("pause");
          return main();
    
}








