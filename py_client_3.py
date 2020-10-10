import socket
import time

s= socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('192.168.0.10', 80))
while True:
    
    data = s.recv(5)
    print(f"Data received")
    print("Data =",data)
    
    if data == b'ABC':
        print("Data is correct")
        s.sendall(b'Hi')
        data = s.recv(5)
        print("Data =",data)
    else:
        print("Data is incorrect")
    time.sleep(5)
