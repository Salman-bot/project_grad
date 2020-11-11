import socket
##import ssl

 

# SET VARIABLES
while True:
    HOST, PORT = '10.157.9.133', 4433

 

# CREATE SOCKET
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.settimeout(10)

 

# WRAP SOCKET ???
    ##ssl.wrap_socket(sock, ssl_version="TLSv1", ciphers="ADH-AES256-SHA")

 

# CONNECT AND PRINT REPLY
    sock.connect((HOST, PORT))
    print("r")
    data = sock.recv(100)
    print("Data Received=",data, "Success");
# CLOSE SOCKET CONNECTION
    sock.close()
