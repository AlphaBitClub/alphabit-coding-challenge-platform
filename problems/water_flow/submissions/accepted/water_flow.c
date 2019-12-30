#include <stdio.h>

int main(int argc, char const *argv[])
{

    float flow;
    int i, n_valves;

    scanf("%f", &flow);
    scanf("%d", &n_valves);

    int valves_bandwidth[n_valves];
    int delays[n_valves];

    for (i = 0; i < n_valves; i++)
        scanf("%d", &valves_bandwidth[i]);

    float results[n_valves];
    delays[0] = 0;
    results[0] = (flow / valves_bandwidth[0]) + delays[0];

    for (i = 1; i < n_valves; i++)
    {
        scanf("%d", &delays[i]);
        delays[i] += delays[i - 1];
        results[i] = (flow / valves_bandwidth[i]) + delays[i];
    }

    int the_valve;
    //finding the index of min
    int index = 0;
    int min = results[0];
    for (i = 1; i < n_valves; i++)
        if (results[i] < min)
        {
            min = results[i];
            index = i;
        }
    printf("%d", index + 1);
    return 0;
}
