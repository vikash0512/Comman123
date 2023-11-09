#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Process {
    char name[20];
    int arrival_time;
    int execution_time;
    int priority;
};

void shortest_job_preemption(struct Process processes[], int n, int time_slice) {
    int total_time = 0;
    int completion_times[n];
    int wait_times[n];
    int remaining_time[n];
    int remaining_processes = n;

    for (int i = 0; i < n; i++) {
        remaining_time[i] = processes[i].execution_time;
        completion_times[i] = -1;
        wait_times[i] = 0;
    }

    while (remaining_processes > 0) {
        int min_priority_index = -1;

        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= total_time && remaining_time[i] > 0) {
                if (min_priority_index == -1 || processes[i].execution_time < processes[min_priority_index].execution_time) {
                    min_priority_index = i;
                }
            }
        }

        if (min_priority_index == -1) {
            total_time++;
        } else {
            if (remaining_time[min_priority_index] <= time_slice) {
                total_time += remaining_time[min_priority_index];
                completion_times[min_priority_index] = total_time;
                remaining_processes--;
                remaining_time[min_priority_index] = 0;
            } else {
                total_time += time_slice;
                remaining_time[min_priority_index] -= time_slice;
            }
        }
    }

    double average_turnaround_time = 0;

    for (int i = 0; i < n; i++) {
        wait_times[i] = completion_times[i] - processes[i].arrival_time - processes[i].execution_time;
        average_turnaround_time += completion_times[i];
    }

    average_turnaround_time /= n;

    printf("Process\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\n", processes[i].name, completion_times[i]);
    }

    printf("Average Turnaround Time: %.2f\n", average_turnaround_time);
}

int main() {
    int n, time_slice;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for (int i = 0; i < n; i++) {
        printf("Enter process name, arrival time, execution time, and priority for process %d: ", i + 1);
        scanf("%s %d %d %d", processes[i].name, &processes[i].arrival_time, &processes[i].execution_time, &processes[i].priority);
    }

    printf("Enter the time slice: ");
    scanf("%d", &time_slice);

    shortest_job_preemption(processes, n, time_slice);

    return 0;
}