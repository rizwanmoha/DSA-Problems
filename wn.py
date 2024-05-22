# import numpy as np
# import simpy
# import matplotlib.pyplot as plt

# class MD1Queue:
#     def __init__(self, env, arrival_rate, service_time):
#         self.env = env
#         self.server = simpy.Resource(env, capacity=1)
#         self.arrival_rate = arrival_rate
#         self.service_time = service_time
#         self.queue_length = 0
#         self.total_customers = 0
#         self.queue_lengths = []

#     def arrival_process(self):
#         while True:
#             self.total_customers += 1
#             self.queue_length += 1
#             self.queue_lengths.append(self.queue_length)
#             service_time = np.random.exponential(self.service_time)
#             self.env.process(self.service_process(service_time))
#             inter_arrival_time = np.random.exponential(1 / self.arrival_rate)
#             yield self.env.timeout(inter_arrival_time)

#     def service_process(self, service_time):
#         with self.server.request() as request:
#             yield request
#             yield self.env.timeout(service_time)
#             self.queue_length -= 1

# class MM1Queue:
#     def __init__(self, env, arrival_rate, service_rate):
#         self.env = env
#         self.server = simpy.Resource(env, capacity=1)
#         self.arrival_rate = arrival_rate
#         self.service_rate = service_rate
#         self.queue_length = 0
#         self.total_customers = 0
#         self.queue_lengths = []

#     def arrival_process(self):
#         while True:
#             self.total_customers += 1
#             self.queue_length += 1
#             self.queue_lengths.append(self.queue_length)
#             service_time = np.random.exponential(1 / self.service_rate)
#             self.env.process(self.service_process(service_time))
#             inter_arrival_time = np.random.exponential(1 / self.arrival_rate)
#             yield self.env.timeout(inter_arrival_time)

#     def service_process(self, service_time):
#         with self.server.request() as request:
#             yield request
#             yield self.env.timeout(service_time)
#             self.queue_length -= 1

# def simulate(md1_arrival_rate, md1_service_time, mm1_arrival_rate, mm1_service_rate, simulation_time):
#     env = simpy.Environment()

#     md1_queue = MD1Queue(env, md1_arrival_rate, md1_service_time)
#     env.process(md1_queue.arrival_process())

#     mm1_queue = MM1Queue(env, mm1_arrival_rate, mm1_service_rate)
#     env.process(mm1_queue.arrival_process())

#     env.run(until=simulation_time)

#     md1_average_length = md1_queue.queue_length / simulation_time
#     mm1_average_length = mm1_queue.queue_length / simulation_time

#     print("MD1 Queue - Average Queue Length:", md1_average_length)
#     print("MM1 Queue - Average Queue Length:", mm1_average_length)

#     plt.plot(md1_queue.queue_lengths, label="MD1 Queue")
#     plt.plot(mm1_queue.queue_lengths, label="MM1 Queue")
#     plt.xlabel("Time")
#     plt.ylabel("Queue Length")
#     plt.title("Queue Length Over Time")
#     plt.legend()
#     plt.show()

# # Simulate different scenarios
# print("Scenario 1:")
# simulate(md1_arrival_rate=0.3, md1_service_time=1.0, mm1_arrival_rate=0.3, mm1_service_rate=0.5, simulation_time=1000)

# print("Scenario 2:")
# simulate(md1_arrival_rate=0.5, md1_service_time=0.8, mm1_arrival_rate=0.5, mm1_service_rate=0.7, simulation_time=1000)

# print("Scenario 3:")
# simulate(md1_arrival_rate=0.2, md1_service_time=1.2, mm1_arrival_rate=0.2, mm1_service_rate=0.4, simulation_time=1000)

# print("Scenario 4:")
# simulate(md1_arrival_rate=0.4, md1_service_time=0.6, mm1_arrival_rate=0.4, mm1_service_rate=0.8, simulation_time=1000)

# print("Scenario 5:")
# simulate(md1_arrival_rate=0.6, md1_service_time=0.9, mm1_arrival_rate=0.6, mm1_service_rate=0.6, simulation_time=1000)

# import numpy as np
# import simpy
# import matplotlib.pyplot as plt

# class MD1Queue:
#     def __init__(self, env, arrival_rate, service_time):
#         self.env = env
#         self.server = simpy.Resource(env, capacity=1)
#         self.arrival_rate = arrival_rate
#         self.service_time = service_time
#         self.queue_length = 0
#         self.total_customers = 0
#         self.queue_lengths = []

#     def arrival_process(self):
#         while True:
#             self.total_customers += 1
#             self.queue_length += 1
#             self.queue_lengths.append(self.queue_length)
#             service_time = np.random.exponential(self.service_time)
#             self.env.process(self.service_process(service_time))
#             inter_arrival_time = np.random.exponential(1 / self.arrival_rate)
#             yield self.env.timeout(inter_arrival_time)

#     def service_process(self, service_time):
#         with self.server.request() as request:
#             yield request
#             yield self.env.timeout(service_time)
#             self.queue_length -= 1

# class MM1Queue:
#     def __init__(self, env, arrival_rate, service_rate):
#         self.env = env
#         self.server = simpy.Resource(env, capacity=1)
#         self.arrival_rate = arrival_rate
#         self.service_rate = service_rate
#         self.queue_length = 0
#         self.total_customers = 0
#         self.queue_lengths = []

#     def arrival_process(self):
#         while True:
#             self.total_customers += 1
#             self.queue_length += 1
#             self.queue_lengths.append(self.queue_length)
#             service_time = np.random.exponential(1 / self.service_rate)
#             self.env.process(self.service_process(service_time))
#             inter_arrival_time = np.random.exponential(1 / self.arrival_rate)
#             yield self.env.timeout(inter_arrival_time)

#     def service_process(self, service_time):
#         with self.server.request() as request:
#             yield request
#             yield self.env.timeout(service_time)
#             self.queue_length -= 1

# def simulate(md1_arrival_rate, md1_service_time, mm1_arrival_rate, mm1_service_rate, simulation_time):
#     env = simpy.Environment()

#     md1_queue = MD1Queue(env, md1_arrival_rate, md1_service_time)
#     env.process(md1_queue.arrival_process())

#     mm1_queue = MM1Queue(env, mm1_arrival_rate, mm1_service_rate)
#     env.process(mm1_queue.arrival_process())

#     env.run(until=simulation_time)

#     md1_average_length = md1_queue.queue_length / simulation_time
#     mm1_average_length = mm1_queue.queue_length / simulation_time

#     print("MD1 Queue - Average Queue Length:", md1_average_length)
#     print("MM1 Queue - Average Queue Length:", mm1_average_length)

#     plt.plot(md1_queue.queue_lengths, label="MD1 Queue")
#     plt.plot(mm1_queue.queue_lengths, label="MM1 Queue")
#     plt.xlabel("Time")
#     plt.ylabel("Queue Length")
#     plt.title("Queue Length Over Time")
#     plt.legend()
#     plt.show()

#     if md1_average_length < mm1_average_length:
#         print("MD1 Queue has a shorter average queue length.")
#     elif md1_average_length > mm1_average_length:
#         print("MM1 Queue has a shorter average queue length.")
#     else:
#         print("Both queues have the same average queue length.")

# # Simulate different scenarios
# print("Scenario 1:")
# simulate(md1_arrival_rate=0.3, md1_service_time=1.0, mm1_arrival_rate=0.3, mm1_service_rate=0.5, simulation_time=1000)

# print("Scenario 2:")
# simulate(md1_arrival_rate=0.5, md1_service_time=0.8, mm1_arrival_rate=0.5, mm1_service_rate=0.7, simulation_time=1000)

# print("Scenario 3:")
# simulate(md1_arrival_rate=0.2, md1_service_time=1.2, mm1_arrival_rate=0.2, mm1_service_rate=0.4, simulation_time=1000)

# print("Scenario 4:")
# simulate(md1_arrival_rate=0.4, md1_service_time=0.6, mm1_arrival_rate=0.4, mm1_service_rate=0.8, simulation_time=1000)

# print("Scenario 5:")
# simulate(md1_arrival_rate=0.6, md1_service_time=0.9, mm1_arrival_rate=0.6, mm1_service_rate=0.6, simulation_time=1000)

import numpy as np
import simpy
import matplotlib.pyplot as plt

class MD1Queue:
    def __init__(self, env, arrival_rate, service_time):
        self.env = env
        self.server = simpy.Resource(env, capacity=1)
        self.arrival_rate = arrival_rate
        self.service_time = service_time
        self.queue_length = 0
        self.total_customers = 0
        self.queue_lengths = []

    def arrival_process(self):
        while True:
            self.total_customers += 1
            self.queue_length += 1
            self.queue_lengths.append(self.queue_length)
            service_time = np.random.exponential(self.service_time)
            self.env.process(self.service_process(service_time))
            inter_arrival_time = np.random.exponential(1 / self.arrival_rate)
            yield self.env.timeout(inter_arrival_time)

    def service_process(self, service_time):
        with self.server.request() as request:
            yield request
            yield self.env.timeout(service_time)
            self.queue_length -= 1

class MM1Queue:
    def __init__(self, env, arrival_rate, service_rate):
        self.env = env
        self.server = simpy.Resource(env, capacity=1)
        self.arrival_rate = arrival_rate
        self.service_rate = service_rate
        self.queue_length = 0
        self.total_customers = 0
        self.queue_lengths = []

    def arrival_process(self):
        while True:
            self.total_customers += 1
            self.queue_length += 1
            self.queue_lengths.append(self.queue_length)
            service_time = np.random.exponential(1 / self.service_rate)
            self.env.process(self.service_process(service_time))
            inter_arrival_time = np.random.exponential(1 / self.arrival_rate)
            yield self.env.timeout(inter_arrival_time)

    def service_process(self, service_time):
        with self.server.request() as request:
            yield request
            yield self.env.timeout(service_time)
            self.queue_length -= 1

def simulate(md1_arrival_rate, md1_service_time, mm1_arrival_rate, mm1_service_rate, simulation_time):
    env = simpy.Environment()

    md1_queue = MD1Queue(env, md1_arrival_rate, md1_service_time)
    env.process(md1_queue.arrival_process())

    mm1_queue = MM1Queue(env, mm1_arrival_rate, mm1_service_rate)
    env.process(mm1_queue.arrival_process())

    env.run(until=simulation_time)

    md1_average_length = md1_queue.queue_length / simulation_time
    mm1_average_length = mm1_queue.queue_length / simulation_time

    return md1_queue.queue_lengths, mm1_queue.queue_lengths


scenario_data = []
for scenario in range(1, 6):
    md1_lengths, mm1_lengths = simulate(md1_arrival_rate=scenario * 0.1,
                                         md1_service_time=scenario * 0.2,
                                         mm1_arrival_rate=scenario * 0.1,
                                         mm1_service_rate=scenario * 0.3,
                                         simulation_time=1000)
    scenario_data.append((md1_lengths, mm1_lengths))


plt.figure(figsize=(10, 6))
for i, (md1_lengths, mm1_lengths) in enumerate(scenario_data):
    plt.plot(md1_lengths, label=f"MD1 Scenario {i+1}")
    plt.plot(mm1_lengths, label=f"MM1 Scenario {i+1}", linestyle="--")
plt.xlabel("Time")
plt.ylabel("Queue Length")
plt.title("Queue Length Over Time")
plt.legend()
plt.grid(True)
plt.show()






