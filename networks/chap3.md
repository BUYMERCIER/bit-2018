# Computer Networks Assignments

Corentin MERCIER - 1820186336

## Chapter 3

#### 18. A channel has a bit rate of 4 kbps and a propagation delay of 20 msec. For what range of frame sizes does stop-and-wait give an efficiency of at least 50 percent?

Bit rate = 4 kbps  
One-way propagation delay = 20 ms  

```
Efficiency = Transmission time of packet/(Transmission time of packet 
	+ 2 * Propagation delay)
0.5 = x/(x + 2 * 20 * 10-3)
x = 20 * 10-3
x = 40 * 10-3
```

Minimum frame size / Bit rate = 40 * 10-3  
Therefore, Minimum frame size = 40 * 10-3 * 4 * 103 = **160 bits**

#### 30. Consider an error-free 64-kbps satellite channel used to send 512-byte data frames in one direction, with very short acknowledgements coming back the other way. What is the maximum throughput for window sizes of 1, 7, 15, and 127? The earth-satellite propagation time is 270 msec.

Transmission time for 1 frame=512 B/(64/8)KBps = 64 ms

Propagation time = 270
Roundtrip time = 2x270= 540ms
Transmission time+ RTT =604 ms

- Window size =1  
means in 604 ms, only 1 frame is sent  
Throughput= 512 B/604 msec = 678 bps

- Window size =7  
means in 604 ms, 7 frames are sent  
Throughput= 7x512 B/604 msec = 7x678 bps = 4746 bps

- We know maximum throughput is possible when Window size = [1+ 2Tpropagation /T transmision]  
= 1+2 *270/64 =9.43 ~ 10  
So Window size =15 will give throughput as maximum bandwidth available ie 64 Kbps


- Window size =127  
But maximum throughput is achieved when window size =10 onwards.  
Hence Window size =127 also will give throughput as maximum bandwidth available ie 64 Kbps.  
Therefore, Window size 15 and 127 have same throughput
