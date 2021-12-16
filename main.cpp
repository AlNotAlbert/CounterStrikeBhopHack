#include <iostream>
#include <unistd.h>
#include <MacTypes.h> // lel

typedef short PID;
typedef u_short DWORD;
DWORD client_address;

std::string client_module = "client.exe";

int main() {
  while (player_jump_key.IsPressed() && InAir() == true) {
    Jump();
    sleep(rand() % 100);
  }

  std::cout << " hello you are in game! \n";
  return 0;
}

PID GetProcessId(Handle process) {
  auto proc_id = GetProcIdFromHandle(process);
  return (short) proc_id;
}

Handle GetHandleToProcess(PID pid) {

};

void ReadMemory(); // TODO

bool InAir() {
  auto localPlayer = nullptr;
  if (localPlayer->AIR_OFFSET == true) // whatever number
  {
    return true;
  }
  return false;
}
void Jump() {
  SendMessage(kCs, VK_SPACE);
}

