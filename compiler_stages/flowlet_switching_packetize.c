Stage 0 : 
 { pkt.tmp__1 = pkt.src_port * pkt.dst_port }   { pkt.tmp__2 = pkt.arrival_time - last_time }   { last_time = (pkt.arrival_time) }
Stage 1 : 
 { pkt.new_next_hop = (pkt.tmp__1 % 10) }   { pkt.tmp__0 = (pkt.tmp__2 > 5) }
Stage 2 : 
 { next_hop = pkt.tmp__0 ? (pkt.new_next_hop) : next_hop }
Stage 3 : 
 { pkt.next_hop = (next_hop) }
