# getting the needed data
flow = float(input())
n_valves = int(input())

valves_bandwidth_table = input().strip().split(' ')
valves_bandwidth = [int(i) for i in valves_bandwidth_table]

delays_table = input().strip().split(" ")
delays = [0]+[int(i) for i in delays_table]

# table of time needed by each valve to distribute  the water flow
results = [flow/valves_bandwidth[0]]

for i in range(1, len(delays)):
    delays[i] += delays[i-1]
    results.append(flow/valves_bandwidth[i] + delays[i])

# the right answer
the_vlave = results.index(min(results))+1

print(the_vlave)
