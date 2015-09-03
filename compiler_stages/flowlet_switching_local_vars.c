#define FLOWLET_GAP 5
#define NUM_PORTS 10

typedef struct Packet {
  int new_next_hop;
  int arrival_time;
  int next_hop;
  int src_port;
  int dst_port;
} Packet;

int last_time;
int next_hop;

void func(Packet pkt) {
  int pkt__arrival_time;
  int pkt__dst_port;
  int pkt__new_next_hop;
  int pkt__next_hop;
  int pkt__src_port;

  pkt__new_next_hop = (pkt__src_port * pkt__dst_port) % NUM_PORTS;
  if (pkt__arrival_time - last_time > FLOWLET_GAP) {
    next_hop = pkt__new_next_hop;
  }
  last_time = pkt__arrival_time;
  pkt__next_hop = next_hop;
}
