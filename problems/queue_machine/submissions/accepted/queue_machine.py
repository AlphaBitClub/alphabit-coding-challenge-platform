def NEW(queue, ticket_number):
    queue.append(ticket_number)
    return queue


def CANCEL(queue, n_order):
    index = queue.index(n_order)
    queue.pop(index)
    return queue


def SHOW(queue, index):
    if index == "FIRST":
        print(queue[0])
    elif index == "LAST":
        print(queue[-1])
    else:
        print_queue(queue)


def NEXT(queue):
    if len(queue):
        queue.pop(0)
    return queue


def print_queue(queue):
    if len(queue):
        queue_to_string = ' '.join([str(elem) for elem in queue])
        print(queue_to_string)
    else:
        print(0)


if __name__ == "__main__":
    ticket_number = 0
    queue = []
    commands = []
    # getting the commands
    n_of_commands = int(input())
    for i in range(n_of_commands):
        commands.append(input().strip())
    # executing the commands
    for command in commands:
        if command == "NEW":
            ticket_number += 1
            queue = NEW(queue, ticket_number)
        elif ("CANCEL" in command):
            n_order = int(command.split(' ')[1])
            queue = CANCEL(queue, n_order)
        elif "SHOW" in command:
            index = command.split(' ')[1]
            SHOW(queue, index)
        else:
            queue = NEXT(queue)
