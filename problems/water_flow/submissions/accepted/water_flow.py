# getting the needed data
flow = float(input())
n_valves = int(input())

valves_bandwidth = list(map(int, input().strip().split(' ')))

delays = [0] + list(map(int, input().strip().split(' ')))

# table of time needed by each valve to distribute the water flow
results = [flow/valves_bandwidth[0]]

for i in range(1, len(delays)):
    # accumulate the delays
    delays[i] += delays[i-1]
    # calculate the needed time
    results.append(flow/valves_bandwidth[i] + delays[i])

# the right answer
the_valve = results.index(min(results))+1

print(the_valve)
