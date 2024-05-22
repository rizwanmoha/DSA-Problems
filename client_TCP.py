import socket
import threading
import time

nickname = input("Choose a nickname: ")
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# client.connect(('10.0.52.32', 55555))
client.connect(('10.0.53.33', 12345))

def receive():
    while True:
        try:
            message = client.recv(1024).decode()
            if message == 'NICK':
                client.send(nickname.encode())
            else:
                print(message)
        except:
            print("An error occurred!")
            client.close()
            break

def write():
    connected = True
    while connected:
        try:
            msg_type = input(" ")
            if msg_type.strip().lower() == 'broadcast':
                message = f'BROADCAST:{nickname}: {input("")}'
                msg_length = len(message)
                send_message(message, msg_length)
            elif msg_type.strip().lower() == 'unicast':
                recipient = input('Whom to send: ')
                message = f'UNICAST:{nickname}:{recipient}:{input("")}'
                msg_length = len(message)
                send_message(message, msg_length)
            elif msg_type.strip().lower() == 'multicast':
                recipients = input('Enter recipients separated by commas: ')
                message = f'MULTICAST:{nickname}:{recipients}:{input("")}'
                msg_length = len(message)
                send_message(message, msg_length)
        except Exception as e:
            print(e)

def send_message(message, msg_length):
    try:
        start_time = time.time()  
        send_length = str(msg_length).encode()
        send_length += b' ' * (64 - len(send_length))
        client.send(send_length)
        client.send(message.encode())
        end_time = time.time() 
        calculate_throughput(msg_length, start_time, end_time)
        calculate_data_rate(msg_length, start_time, end_time)
    except Exception as e:
        print(e)

def calculate_throughput(data_size, start_time, end_time):
    time_taken = end_time - start_time
    throughput = data_size / time_taken
    print(f"Throughput: {throughput} bytes/second")

def calculate_data_rate(data_size, start_time, end_time):
    time_taken = end_time - start_time
    data_rate = (data_size * 8) / time_taken  
    print(f"Data Rate: {data_rate} bits/second")

receive_thread = threading.Thread(target=receive)
receive_thread.start()
write_thread = threading.Thread(target=write)
write_thread.start()