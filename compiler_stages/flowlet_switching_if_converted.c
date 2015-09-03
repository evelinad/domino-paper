int next_hop;
int last_time;
void func() {
  int tmp__0;
  int pkt__arrival_time;
  int pkt__dst_port;
  int pkt__new_next_hop;
  int pkt__next_hop;
  int pkt__src_port;
  pkt__new_next_hop =
      (1 ? ((pkt__src_port * pkt__dst_port) % 10) : pkt__new_next_hop);
  tmp__0 = (1 ? (pkt__arrival_time - last_time > 5) : tmp__0);
  next_hop = ((1 && tmp__0) ? (pkt__new_next_hop) : next_hop);
  last_time = (1 ? (pkt__arrival_time) : last_time);
  pkt__next_hop = (1 ? (next_hop) : pkt__next_hop);
}
