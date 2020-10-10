import socket
import time

s= socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('192.168.0.10', 80))
while True:
    
    data = s.recv(32)
    print(f"Data received")
    print("Data =",data)
    
    if data == b'ABC':
        print("Data is correct")
        #s.sendall(b'Hi')
        s.sendall(b'No')
        data = s.recv(32)
        print("Data =",data)
        
    else:
        print("Data is incorrect")
        
        
    time.sleep(5)
