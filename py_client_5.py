import socket
import time


while True:
    time.sleep(3)
    s= socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect(('192.168.0.10', 80))
    print("Now Receiving")
    time.sleep(1)
    data = s.recv(3)
    if data == b'ABC':   
        print("Data Received=",data);
        print("Now Sending")
        time.sleep(1)
        s.sendall(b'Hi')
        #s.sendall(b'No')
        print("Now Receiving")
        time.sleep(1)
        data = s.recv(5)
        if data == b'Hello':   
            print("Data Received=",data, "Success");
            time.sleep(1)
            s.close()
        else:
            print("Error in Attestation")
            print("Data Received=",data);
            time.sleep(1)
            
