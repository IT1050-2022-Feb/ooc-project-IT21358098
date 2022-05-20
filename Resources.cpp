#include <iostream>
#include <string>
#include "Resources.h"
using namespace std;

// Resources
void Resources::setResourcesDetails(string Type, int No)

{
    resourcesNo = No;  
	resourcesType = Type; 
} 
 
int Resources::getresourcesNo() 

{
  return resourcesNo; 
} 
 