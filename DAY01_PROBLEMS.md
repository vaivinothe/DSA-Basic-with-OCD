  1. https://leetcode.com/problems/ugly-number/description/?envType=problem-list-v2&envId=math
 def isUgly(self, n):
        a = n
        def check(y):
            if y<=0 : return False
            elif y==1:return True
            for i in [2,3,5]:    
                while y%i==0:
                     y =y/i
                     if y == 1:
                       return True        
            return False
        return check(a)
     2. https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions
     def reversedBits(self, x):
        import math
        x 
        list =[]
        def decimal(newlist):
            newlist.reverse()
            p = 0
            for idx , val in enumerate(newlist):
                p =p + val*math.pow(2,len(newlist)-idx -1)
            return p
        def binary(a):
            i = 31
            while i>=0:
                if a == 0:
                    list.append(0)
                    break 
                elif a >= math.pow(2,i): 
                    a = a - math.pow(2,i)
                    list.append(1)
                else:
                    list.append(0) 
                i = i - 1    
            q=decimal(list)
            return q
                         
        return int( binary(x))
