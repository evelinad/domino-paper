int next_hop;
int last_time;
void func() {
  int tmp__0;
  int pkt__arrival_time;
  int pkt__dst_port;
  int pkt__new_next_hop;
  int pkt__next_hop;
  int pkt__src_port;
  int tmp__1;
  int tmp__2;
  tmp__1 = pkt__src_port * pkt__dst_port;
  pkt__new_next_hop = (tmp__1 % 10);
  tmp__2 = pkt__arrival_time - last_time;
  tmp__0 = (tmp__2 > 5);
  next_hop = tmp__0 ? (pkt__new_next_hop) : next_hop;
  last_time = (pkt__arrival_time);
  pkt__next_hop = (next_hop);
}
