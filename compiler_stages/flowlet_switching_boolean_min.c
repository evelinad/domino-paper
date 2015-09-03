int next_hop;
int last_time;
void func() {
  int tmp__0;
  int pkt__arrival_time;
  int pkt__dst_port;
  int pkt__new_next_hop;
  int pkt__next_hop;
  int pkt__src_port;
  pkt__new_next_hop = ((pkt__src_port * pkt__dst_port) % 10);
  tmp__0 = (pkt__arrival_time - last_time > 5);
  next_hop = tmp__0 ? (pkt__new_next_hop) : next_hop;
  last_time = (pkt__arrival_time);
  pkt__next_hop = (next_hop);
}
