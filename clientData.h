#include "defHeaders.h"

using namespace std;

class ClientData_c {

  public: string objectName = "client data container object";

  string firstName {};
  string lastName {};
  string phoneNumber {};
  string roomNumber {};
  int guestIdNumber {};
};
vector < ClientData_c > ClientData_v; //Top level to cut down on complexity
