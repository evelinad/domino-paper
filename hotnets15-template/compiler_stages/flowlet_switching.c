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
  pkt.new_next_hop = (pkt.src_port * pkt.dst_port) % NUM_PORTS;
  if (pkt.arrival_time - last_time > FLOWLET_GAP) {
    next_hop = pkt.new_next_hop;
  }
  last_time = pkt.arrival_time;
  pkt.next_hop = next_hop;
}
