import socket
import time

s= socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('192.168.0.10', 80))
while True:
    print("Now Reveiving")
    time.sleep(2)
    data = s.recv(16)
    if data == b'ABC':   
        print("Data=",data);
        time.sleep(2)
        print("Now Sending")
        s.sendall(b'Hi')
        #s.sendall(b'No')
        
    else:
        time.sleep(2)
        print("Not Correct")
        print("Data=",data);
    #else:
    #    print("Data is incorrect")
    # %%   print("Data=",data);
       
    
    
