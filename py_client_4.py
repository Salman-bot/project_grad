import socket
import time

s= socket.socket(socket.AF_INET, socket.SOCK_STREAM)

while True:
    s.connect(('192.168.0.10', 80))
    data = s.recv(5)
    print(f"Data received")
    print("Data =",data)
    
    if data == b'ABC':
        print("Data is correct")
        #s.sendall(b'Hi')
        s.sendall(b'No')
        data = s.recv(5)
        print("Data =",data)
        s.close();
    else:
        print("Data is incorrect")
        s.close();
        
    time.sleep(5)
