# Computer Networks

## Basic Info:

name: Su Hongyi

tel: 68946645

mailto: henrysu@bit.edu.cn

book1: Computer Networks, 5th ed. *Andrew Tanenbaum, David Wetherall*

book2: Computer Networking *James Kurose, Keith Ross*

## Intro:

* Get familiar with networking 

* Understand network architecture

* Do firast work to push people to get into R&D

## Contents:

* Data commmunication fundamentals

* ISO/OSI model

* LAN

* TCP/IP Stack

* The internet (lol)

* Management and security

## Grading:

### Credits :

48 hours with 3 credits

### Assignements and attendance:

Homework is given un-periodically

## Chapter 1: Introduction (1)

### Historic review:

* ENIAC: 1946 first computer

* ARPANET: 1969, first advanced network

* Internet: 1986

* National Information Infrastructure: 1993

* Commercial I=internet: 1995

* NGI: 1995,  next gen internet

* I2: 1996 Internet2 

* CNGI: Cernet2

## Internetworking principles:

* minimalism and autonomy: no internal changes required to interconnect

* best effort service model: you just send message, no need to care if he's up or not or far ...

* stateless routers: internet = packet switching network, if damaged or down an other route will be taken (doesn't depend on node state)

* decentralized control

## History (again):

* 1983: deployment of TCP/IP

* 1982: smtp e-mail

* 1983: DNS (domain name translation)

* 1985: ftp 

* Early 1990's: HTML, HTTP (hypertext-transfeer-protocol), www (World Wide Web)

* 1990's-2000's: instant messaging, P2P, network security becomes important, backbonelinks

* 2007: ~500M hosts

## What is a computer network ? 

Computer network: Interconnected collection of autonomous computers

Our def: A system interconnectiong multiple autonomous computers in diifferent locations with communicaiton equipment, trunks, software ...

## Difference between network and distributed system

* Distributed = transparency, no info for users

* Network = new hosts, so users must choose a machine

* Difference is at the software level not hardware level

* Interne t is not a single network it's a network of networks

* The web is a system that runs on top of the web 

## Use of computer networks 

* Resource sharing and information sharing

* Saving money: client - server model 

* Scalability

### Business applications:

* client-server model => request-reply system

* e-commerce

### Home applications:

* Access to remote info

* Person to person communication

* Interactive entertainment

* e-commerce

* tags: B2C, B2B, G2C, C2C, P2P, business, consumer, government, peer

### None:

* RFID = radio-frequency identification: turn the world of real things into IOT ?

* m-commerce: mobile commerce

## Computer networks overview:

### Hardware:

* LAN: local area

* MAN: metropolitan area

* WAN: wide area

* Internetworks

#### Types:

* Broadcast network: a single channel is shared by all computers, everyone receives everything

* Multicasting: transmission to a subnet of users

* Point-to-point network: Computers are connected in pairs, just the recipient gets the message (posibly with routing)

* Unicasting: point-to-point with only one sender en ad one receiver

* __Most used:__ broadcast and point-to-point

### Classification by scale: 

Photo de Nolwenn

### Personnal area network: 

* Bluetooth

### LAN:

* Difference w/ PAN = scale

* Generally uses broadcast technology

#### Bus based:

* All computers on same wire

* Everyone gets everything

* If multiple people at sme time message is rubbish

#### Token based: 

* A token continuosly circulates along the ring

##### Sending: 

* Collect token

* Sends packet

* Waits for it to come back

* Reintroduces the original token

### MAN:

Photo de Nolwenn

### WAN:

* Hosts are conencted to a subnet which is made of routers and trunks

* Routers adhere to a store-and-forward principle, read , make decision then __route__ the packet

#### 2 subnets:

* Resource subnet: computers, terminals, programs => information processing

* Communication subnet: lines, routers, switches = > information delivery

#### Topology:

* __Star__

* __Ring__

* __Tree__

* Mesh

### Internetworks:

* In smaller networks hardware and software is homogeneous

* Here hardware and software is heterogeneous

## Computer software

* Protocol hierarchy through layers of protocols each layer offering services to its upper layer

* Layer n  of sender stack communicates with layer n of receiver stack

Protocols define format, order ... of messages sent and received an actions taken when received

### Terminologies:

* Layers: networks are organized as a stack of layers

* Protocol:  an agreement between the communicating parties on how to communicate

* Peers

* Interfaces

* Network architecture: A set of layers and protocols, with interfaces between layers

* Protocol stack: list of protocols used by a certain system, one protocol per layer

* Protocol hierarchy: structure of the services a network layer geives to its upper layer

### Layering: the concepts

* Interface between layers

* Protocol is horizontal

* Service is vetical

* Sometimes the are not only __headers__ but also __trailers__.

### Layering: design issues

* Addressing: identify source and destination

* Rules for data transfer: simplex, half-duplex, full-duplex

* Error control

* Sequencing: keep message order

* Flow control: Keep a fast sender from clogging and little receiver

* Disassembling and reassembling: Allow a process to accept arbitrarily long message

* Multiplexing: Using the same connection for multiple unrelated communications

* Routing: Selecting the fastest path between multiple different paths between source and destination
