# Computer Networks Assignments

Corentin MERCIER - 1820186336

## Chapter 4

### 15. A 1-km-long, 10-Mbps CSMA/CD LAN (not 802.3) has a propagation speed of 200 m/µsec. Repeaters are not allowed in this system. Data frames are 256 bits long, including 32 bits of header, checksum, and other overhead. The first bit slot after a successful transmission is reserved for the receiver to capture the channel in order to send a 32-bit acknowledgement frame. What is the effective data rate, excluding overhead, assuming that there are no collisions?



### 16. Consider building a CSMA/CD network running at 1 Gbps over a 1-km cable with no repeaters. The signal speed in the cable is 200,000 km/sec. What is the minimum frame size?

We must keep in mind that in CSMA/CD , for a station to get some surety of
successful transmission the contention interval (time during which the station is
transmitting) should have at least 2ι slot width where ι is time for signal to
propagate between two farthest stations ie there must be enough time for the
front of the frame to reach the end of the cable and then for an error message to
be sent back to the start before the entire frame is transmitted.
As a result for a 1 km cable the one way propagation time = 1/200000
 = 5 x 10-6 = 5 µsec
so for both ways it would be = 2 x 5 µsec = 10 µsec
To make CSMA/CD work, it must be impossible to transmit an entire frame in this
interval. At 1 Gbps, all frames shorter than 10,000 bits can be completely
transmitted in under 10 µsec, so the minimum frame is 10,000 bits or 1250
bytes.
 ie 109
 bps x 10 x 10-6 sec = 104
 bits
 104
 bits / 8 = 1250 bytes
