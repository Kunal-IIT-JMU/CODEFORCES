def convert_to_12_hour_format(time_24h):
    hours, minutes = map(int, time_24h.split(':'))

    period = 'AM' if hours < 12 else 'PM'

    hours = hours % 12
    if hours == 0:
        hours = 12  

    time_12h = '{:02d}:{:02d} {}'.format(hours, minutes, period)
    return time_12h

n = int(input())
for i in range(0,n):
    time_24h = input()
    time_12h = convert_to_12_hour_format(time_24h)
    print(time_12h)
