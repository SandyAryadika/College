class Process:
    def __init__(self, name, arrival_time, burst_time):
        self.name = name
        self.arrival_time = arrival_time
        self.burst_time = burst_time

def fcfs(processes):
    processes.sort(key=lambda x: x.arrival_time)
    time_elapsed = 0
    total_waiting_time = 0

    for process in processes:
        if process.arrival_time > time_elapsed:
            time_elapsed = process.arrival_time

        total_waiting_time += time_elapsed
        time_elapsed += process.burst_time

    n = len(processes)
    average_waiting_time = total_waiting_time / n
    return average_waiting_time

def main():
    n = int(input("Masukkan banyaknya proses: "))
    processes = []

    for i in range(n):
        name = input(f"Masukkan nama proses {i + 1}: ")
        arrival_time = int(input(f"Masukkan arrival time {name}: "))
        burst_time = int(input(f"Masukkan burst time {name}: "))
        processes.append(Process(name, arrival_time, burst_time))

    average_waiting_time = fcfs(processes)
    print(f"Average Waiting Time: {average_waiting_time:.2f}")

if __name__ == "__main__":
    main()
