class Date:
    def get_date(self):
        return '2022-02-08'
class Time(Date): # class Time is derived from Date class
    def get_time(self):
        return '13:16:00'

dt = Date()
print('Get Date from Date Class',dt.get_date())

tm = Time()
print('Get Time from Time Class',tm.get_time())
print('Get Date from Time Class',tm.get_date())