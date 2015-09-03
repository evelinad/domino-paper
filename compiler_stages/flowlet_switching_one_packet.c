Stage 0 : 
 { tmp__1 = pkt__src_port * pkt__dst_port }   { tmp__2 = pkt__arrival_time - last_time }   { last_time = (pkt__arrival_time) }
Stage 1 : 
 { pkt__new_next_hop = (tmp__1 % 10) }   { tmp__0 = (tmp__2 > 5) }
Stage 2 : 
 { next_hop = tmp__0 ? (pkt__new_next_hop) : next_hop }
Stage 3 : 
 { pkt__next_hop = (next_hop) }
