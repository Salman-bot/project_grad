import socket
import time

s= socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('192.168.0.10', 80))
while True:
    ##s.sendall(b'EE496')
    data = s.recv(32)
    print(f"Data received")
    print("Data =",data)
    time.sleep(5)
