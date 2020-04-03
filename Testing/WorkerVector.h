#pragma once

#include <string>
#include <vector>
#inlcude "Worker.h"

class WorkerVector{
private:
vector<Worker*> workers;

public:
WorkerVector(){
  workers = new vector<Worker>();
}
~WorkerVector(){}

void add(Worker* w)
	{
		workers.push_back(w);
	}
};

//y Aqui colocas todas las cosas que necesitas hacer
// con el vector
// por ejemplo

//CANTIDAD DE EMPLEADOS QUE INDICAN QUE DEFINITIVAMENTE NO
//RECIBEN UN SALARIO ADECUADO POR SU TRABAJO

int Function(){
  int cont;
  for(int i=0;i<workers.size();i++){
    if(workers[i].getQ1() == 'D') cont++
  }

  return cont;
}